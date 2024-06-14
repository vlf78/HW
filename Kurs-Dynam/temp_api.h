#include <stdint.h>

typedef struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
} sensor;

typedef struct array
{
    sensor *item;
    int size;
    int sp;
} array;

void init_array(array *arr);
void delete_array(array *arr);
void push(array *arr, sensor value);

void loadfile(array *arr,char* filename);
uint8_t add_data(array *arr, char* str);
void print_data(array *arr);

int8_t average_temperature_month(array *arr, uint16_t year, uint8_t month);
int8_t min_temperature_month(array *arr, uint16_t year, uint8_t month);
int8_t max_temperature_month(array *arr, uint16_t year, uint8_t month);

int8_t average_temperature_year(array *arr, uint16_t year);
int8_t min_temperature_year(array *arr, uint16_t year);
int8_t max_temperature_year(array *arr, uint16_t year);