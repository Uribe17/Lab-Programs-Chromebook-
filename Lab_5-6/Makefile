RPG:	RPG.cpp
	g++ RPG.cpp -c
		
main:	main.cpp
	g++ main.cpp -c

clean:
		rm -f RPG.o main.o

run:	RPG.o main.o
		g++ main.o RPG.o -o main
		./main