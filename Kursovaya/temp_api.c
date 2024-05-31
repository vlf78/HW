#include <stdint.h>
#include <stdio.h>
#include "temp_api.h"

extern uint32_t data_lenght;

uint8_t add_data(struct sensor* data, char* str)
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;

    uint8_t r = sscanf(str,"%d;%d;%d;%d;%d;%d",&year,&month,&day,&hour,&minute,&temperature);
    if(r<6)
        return 1;   // error

    data[data_lenght].year = year;   
    data[data_lenght].month = month;
    data[data_lenght].day = day;
    data[data_lenght].hour = hour;
    data[data_lenght].minute = minute;
    data[data_lenght].temperature = temperature;

    data_lenght++;
}

void print_data(struct sensor* data)
{
    printf("=======Загруженные данные================");
    for (size_t i = 0; i < data_lenght; i++)
    {
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
            data[i]->year,
            data[i].month,
            data[i].day,
            data[i].hour,
            data[i].minute,
            data[i].temperature            
            );
    }    
}

uint8_t average_temperature_month(uint16_t year, uint8_t month)
{
    return 0;
}

uint8_t min_temperature_month(uint16_t year, uint8_t month)
{
    return 0;
}

uint8_t max_temperature_month(uint16_t year, uint8_t month)
{
    return 0;
}

uint8_t average_temperature_year(uint16_t year)
{
    return 0;
}

uint8_t min_temperature_year(uint16_t year)
{
    return 0;
}

uint8_t max_temperature_year(uint16_t year)
{
    return 0;
}