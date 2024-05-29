#include <stdint.h>
#include <stdio.h>
#include "temp_api.h"

struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
};

int main(void)
{
    struct sensor data[1000];
    printf("Hello world!\n");
    return 0;
}