#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

#define SIZE 520000    // количество минут в году с запасом

int main(int argc, char *argv[])
{    
    struct sensor* data = malloc(SIZE*sizeof(struct sensor));
    if(!data)
    {
        printf("Not enough memory!");
        return -1;
    }

    uint32_t data_lenght=0;
    uint16_t year = 2021;     // год фиксируем, т.к. он нигде не запрашивается
    uint8_t month = 0;        // по умолчанию месяц не задан

    if(argc==1)
    {
        // мини-хелп
        printf("\nTemperature statictic application.\n");
        printf("    main.exe -h  for help\n");
        free(data);
        return 0;
    }

    for(int i=0; i<argc; i++)
    {        
        char* str = argv[i];
        if(str[0]=='-')
        {
            switch (str[1])
            {
                case 'h':
                    printf("\nTemperature statictic application.\n");
                    printf("Command format:\n   main.exe -f <filename.csv> [-m <month number>]\n");
                    printf("Command string's keys:\n");
                    printf("    -h  help\n");
                    printf("    -f <filename.csv> input file for load\n");
                    printf("    -m <month number> statistic only for this month\n");   
                    free(data);
                    return 0;   // тут завершаем программу т.к. help не должен ничего делать
                    break;
                case 'f':
                    data_lenght = loadfile(data,argv[i+1]);
                    // print_data(data,data_lenght);
                    break;
                case 'm':
                    month = atoi(argv[i+1]);
            }
        }
    }

    // выводим статистику из загруженного файла
    if (month == 0)
    {
        printf("Year\tMonth\tMin\tMax\tAvg\n");
        for(int i=1; i<=12; i++)
        {
            printf("%d\t%d\t%d\t%d\t%d\n",year,i,min_temperature_month(data,data_lenght,year,i),max_temperature_month(data,data_lenght,year,i),average_temperature_month(data,data_lenght,year,i));
        }

        printf("\nYear average: %"PRIi8"\n", average_temperature_year(data,data_lenght,year));
        printf("Year minimum: %"PRIi8"\n", min_temperature_year(data,data_lenght,year));
        printf("Year maximum: %"PRIi8"\n", max_temperature_year(data,data_lenght,year));
    }
    else
    {
        printf("\nStatictic on month: %"PRIi8"\n",month);
        printf("Average temperature: %"PRIi8"\n", average_temperature_month(data,data_lenght,year,month));
        printf("Minimum temperature: %"PRIi8"\n", min_temperature_month(data,data_lenght,year,month));
        printf("Maximum temperature: %"PRIi8"\n", max_temperature_month(data,data_lenght,year,month));
    }

    free(data);
    return 0;
}