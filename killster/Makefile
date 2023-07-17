all: killer
	@del /F killer.o

killer: killer.o
	gcc killer.o -o killer.exe

killer.o: russian_roulette.c
	gcc -c -Wall -Wextra -Werror russian_roulette.c -o killer.o

clean:
	@del /F killer.exe killer.o haip.txt