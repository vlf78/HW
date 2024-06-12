all: prog	
	del *.o
	main.exe -f temperature_small.csv	

prog: main.o temp_api.o
	gcc -o main main.o temp_api.o

main.o: main.c
	gcc -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del main.exe	