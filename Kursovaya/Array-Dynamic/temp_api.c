#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

void init_array(array *arr)
{
    arr->size = 16;
    arr->sp = 0;
    arr->item = (sensor*) malloc(arr->size*sizeof(sensor));
}

void delete_array(array *arr)
{
    free(arr->item);
}

void push(array *arr, sensor value)
{
    if(arr->sp == arr->size-1)
    {
        arr->size = arr->size*2;
        arr->item = (sensor*) realloc(arr->item, arr->size*sizeof(sensor));
    }
    arr->item[arr->sp++] = value;
}

void loadfile(array *arr,char* filename)
{
    FILE *f;
    uint32_t count=0;
    int r;
    char str[25];
    f = fopen(filename,"r");
    
    while(1)
    {        
        r = fscanf(f,"%[^\n]",str); // здесь такое мудрёное вычитывание, т.к. в строке могут быть пробелы
        if(add_data(arr,str))
            printf("Error in load string number %d\n",count+1);        
        else
            count++;            
        r = fscanf(f,"%[\n]",str); // а здесь дочитываем перевод строки
        if(r==-1)
            break;
    }
    fclose(f);   
    printf("Loaded %d strings\n",count);
}

uint8_t add_data(array *arr, char* str)
{
    int year,month,day,hour,minute,temperature;

    uint8_t r = sscanf(str,"%d;%d;%d;%d;%d;%d",&year,&month,&day,&hour,&minute,&temperature);
    
    if(r<6)
        return 1;   // error

    sensor data;

    data.year = year;   
    data.month = month;
    data.day = day;
    data.hour = hour;
    data.minute = minute;
    data.temperature = temperature;

    push(arr,data);

    return 0;
}

void print_data(array *arr)
{
    printf("\n=======Data loaded================\n");
    for (int i = 0; i < arr->sp; i++)
    {
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
            arr->item[i].year,
            arr->item[i].month,
            arr->item[i].day,
            arr->item[i].hour,
            arr->item[i].minute,
            arr->item[i].temperature            
            );
    }    
}

int8_t average_temperature_month(array *arr, uint16_t year, uint8_t month)
{
    int32_t sum = 0;
    uint16_t count = 0;    

    for (int i=0; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year && arr->item[i].month == month)
        {            
            sum += arr->item[i].temperature;
            count++;            
        }
    }
    
    int8_t rez = 0;
    if(count!=0)
    {
        rez = sum/count;
    }        
    return rez;
}

int8_t min_temperature_month(array *arr, uint16_t year, uint8_t month)
{
    int8_t min = 100;
    for (int i=0; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year && arr->item[i].month == month && arr->item[i].temperature < min)
            min = arr->item[i].temperature;
    }
    return min;
}

int8_t max_temperature_month(array *arr, uint16_t year, uint8_t month)
{
    int8_t max = -100;
    for (int i=0; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year && arr->item[i].month == month && arr->item[i].temperature > max)
            max = arr->item[i].temperature;
    }
    return max;
}

int8_t average_temperature_year(array *arr, uint16_t year)
{    
    int64_t sum = 0;
    uint32_t count = 0;
    for (int i=0; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year)
        {
            sum += arr->item[i].temperature;
            count++;            
        }
    }
    
    int8_t rez = 0;
    if(count!=0)
    {
        rez = sum/count;
    }        
    return rez;
}

int8_t min_temperature_year(array *arr, uint16_t year)
{
    int8_t min = arr->item[0].temperature;
    for (int i=1; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year && arr->item[i].temperature < min)
            min = arr->item[i].temperature;
    }
    return min;
}

int8_t max_temperature_year(array *arr, uint16_t year)
{
    int8_t max = arr->item[0].temperature;
    for (int i=1; i < arr->sp; i++)
    {        
        if(arr->item[i].year == year && arr->item[i].temperature > max)
            max = arr->item[i].temperature;
    }
    return max;
}