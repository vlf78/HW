#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

int main(int argc, char *argv[])
{          
    uint16_t year = 2021;     // год фиксируем, т.к. он нигде не запрашивается
    uint8_t month = 0;        // по умолчанию месяц не задан

    if(argc==1)
    {
        // мини-хелп
        printf("\nTemperature statictic application.\n");
        printf("    main.exe -h  for help\n");        
        return 0;
    }

    array sens_array;
    init_array(&sens_array);

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
                    delete_array(&sens_array);
                    return 0;   // тут завершаем программу т.к. help не должен ничего делать
                    break;
                case 'f':
                    loadfile(&sens_array,argv[i+1]);
                    // print_data(&sens_array);
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
            printf("%d\t%d\t%d\t%d\t%d\n",year,i,min_temperature_month(&sens_array,year,i),max_temperature_month(&sens_array,year,i),average_temperature_month(&sens_array,year,i));
        }

        printf("\nYear average: %"PRIi8"\n", average_temperature_year(&sens_array,year));
        printf("Year minimum: %"PRIi8"\n", min_temperature_year(&sens_array,year));
        printf("Year maximum: %"PRIi8"\n", max_temperature_year(&sens_array,year));
    }
    else
    {
        printf("\nStatictic on month: %"PRIi8"\n",month);
        printf("Average temperature: %"PRIi8"\n", average_temperature_month(&sens_array,year,month));
        printf("Minimum temperature: %"PRIi8"\n", min_temperature_month(&sens_array,year,month));
        printf("Maximum temperature: %"PRIi8"\n", max_temperature_month(&sens_array,year,month));
    }

    delete_array(&sens_array);
    return 0;
}