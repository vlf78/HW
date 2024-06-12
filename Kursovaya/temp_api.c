#include <stdint.h>
#include <stdio.h>
#include "temp_api.h"

uint32_t loadfile(struct sensor* data,char* filename)
{
    FILE *f;
    uint32_t data_lenght=0;
    int r;
    char str[25];
    f = fopen(filename,"r");
    r = fscanf(f,"%s",str);
    while(r>0)
    {
        if(add_data(data,str,data_lenght))
            printf("Error in load string number %d\n",data_lenght+1);        
        else
            data_lenght++;    
        r = fscanf(f,"%s",str);       
    }
    fclose(f);   
    printf("Loaded %d strings\n",data_lenght) ;
    return data_lenght;
}

uint8_t add_data(struct sensor* data, char* str, uint32_t index)
{
    int year,month,day,hour,minute,temperature;

    uint8_t r = sscanf(str,"%d;%d;%d;%d;%d;%d",&year,&month,&day,&hour,&minute,&temperature);
    if(r<6)
        return 1;   // error

    data[index].year = year;   
    data[index].month = month;
    data[index].day = day;
    data[index].hour = hour;
    data[index].minute = minute;
    data[index].temperature = temperature;

    return 0;
}

void print_data(struct sensor* data, uint32_t data_lenght)
{
    printf("\n=======Загруженные данные================\n");
    for (size_t i = 0; i < data_lenght; i++)
    {
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
            data[i].year,
            data[i].month,
            data[i].day,
            data[i].hour,
            data[i].minute,
            data[i].temperature            
            );
    }    
}

int8_t average_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month)
{
    int16_t sum = 0;
    uint8_t count = 0;
    for(int i=0; i<data_lenght;i++)
    {        
        if(data[i].year == year && data[i].month == month)
        {            
            sum += data[i].temperature;
            count++;
            // printf("i = %d data = %d summ = %d count = %d\n",i,data[i].temperature,sum,count);
        }
    }
    int8_t rez = 0;
    if(count!=0)
    {
        rez = sum/count;
    }        
    return rez;
}

int8_t min_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month)
{
    int8_t min = 100;
    for(int i=0; i<data_lenght;i++)
    {        
        if(data[i].year == year && data[i].month == month && data[i].temperature < min)
            min = data[i].temperature;
    }
    return min;
}

int8_t max_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month)
{
    int8_t max = -100;
    for(int i=0; i<data_lenght;i++)
    {        
        if(data[i].year == year && data[i].month == month && data[i].temperature > max)
            max = data[i].temperature;
    }
    return max;
}

int8_t average_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year)
{
    int16_t sum = 0;
    uint8_t count = 0;
    for(int i=0; i<data_lenght;i++)
    {        
        if(data[i].year == year)
        {
            sum += data[i].temperature;
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

int8_t min_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year)
{
    int8_t min = data[0].temperature;
    for(int i=1; i<data_lenght;i++)
    {        
        if(data[i].year == year && data[i].temperature < min)
            min = data[i].temperature;
    }
    return min;
}

int8_t max_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year)
{
    int8_t max = data[0].temperature;
    for(int i=1; i<data_lenght;i++)
    {        
        if(data[i].year == year && data[i].temperature > max)
            max = data[i].temperature;
    }
    return max;
}