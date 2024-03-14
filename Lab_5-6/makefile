RPG:	RPG.cpp
	g++ RPG.cpp -c

main:	main.cpp
	g++ main.cpp -c

clean:
	rm -f RPG.o main.o main

run: RPG main
	g++ main.o RPG.o -o main
	./main