#include <stdint.h>

// стуктура датчиков
struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
};

uint32_t loadfile(struct sensor* data,char* filename);
uint8_t add_data(struct sensor* data, char* str,uint32_t index);
void print_data(struct sensor* data,uint32_t data_lenght);

int8_t average_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month);
int8_t min_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month);
int8_t max_temperature_month(struct sensor* data, uint32_t data_lenght, uint16_t year, uint8_t month);

int8_t average_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year);
int8_t min_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year);
int8_t max_temperature_year(struct sensor* data, uint32_t data_lenght, uint16_t year);
