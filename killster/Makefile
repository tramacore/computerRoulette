all : killer
	@chmod 777 complete.sh
	@chmod 777 delete.sh
killer : killer.o
	@echo "***Этот файл создан для примера***" >assets/exampleFile1.md
	@(gcc killer.o -o killer)
	@(rm -rf killer.o)
killer.o : russian_roulette.c
	@(gcc -c -Wall -Wextra -Werror russian_roulette.c -o killer.o)
clean : 
	@(rm -rf killer.o killer.exe sample.txt killer a.out assets/exampleFile1.md) 
kill :
	@./killer