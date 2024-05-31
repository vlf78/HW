#include <stdint.h>
#include <stdio.h>
#include "temp_api.h"

// глобальные переменные
struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
};

uint32_t data_lenght=0;

void loadfile(struct sensor* data, char* filename);

int main(int argc, char *argv[])
{
    struct sensor data[1000]; // если записей 600000 этогда программа вешается - BIG DATA    

    for(int i=0; i<argc; i++)
    {
        printf("i = %d, argv = %s \n",i,argv[i]);
        char* str = argv[i];
        if(str[0]=='-')
        {
            switch (str[1])
            {
                case 'h':
                    printf("Вывод статистики работы датчика из указанного файла.\n");
                    printf("Формат команды:\n   prog.exe -f <filename.csv> [-m <номер месяца>]\n");
                    printf("Ключи командной строки:\n");
                    printf("    -h  Описание функционала приложения\n");
                    printf("    -f <filename.csv> входной файл csv для обработки\n");
                    printf("    -m <номер месяца> если задан указанный ключ, то выводится статистика только за указанный месяц\n");
                    break;
                case 'f':
                    loadfile(data,argv[i+1]);
                    print_data(data);
                    break;
            }
        }
    }
    return 0;
}

void loadfile(struct sensor* data,char* filename)
{
    FILE *f;
    int r;
    char *str;
    f = fopen(filename,"r");
    r = fscanf(f,"%s",str);
    while(r>0)
    {
        if(add_data(data,str))
            printf("Ошибка при загрузке в строке %d",data_lenght);
        else
            data_lenght++;    
    }
    fclose(f);    
}