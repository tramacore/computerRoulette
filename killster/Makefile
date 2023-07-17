all : killer
	@(rm -rf killer.o)
killer : killer.o
	@(gcc killer.o -o killer.exe)
	@(gcc killer.o -o killer)
killer.o : russian_roulette.c
	@(gcc -c -Wall -Wextra -Werror russian_roulette.c -o killer.o)
clean : 
	@(rm -rf killer.o haip.txt killer , killer.exe) 