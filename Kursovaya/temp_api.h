#include <stdint.h>

uint8_t add_data(struct sensor* data, char* str);
void print_data(struct sensor* data);

uint8_t average_temperature_month(uint16_t year, uint8_t month);
uint8_t min_temperature_month(uint16_t year, uint8_t month);
uint8_t max_temperature_month(uint16_t year, uint8_t month);

uint8_t average_temperature_year(uint16_t year);
uint8_t min_temperature_year(uint16_t year);
uint8_t max_temperature_year(uint16_t year);
