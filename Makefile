all: bin/main_binka

bin/main_binka: obj/main.o obj/quadratic.o
	gcc -o bin/main_binka obj/main.o obj/quadratic.o -lm
	
obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o
	
obj/quadratic.o: src/quadratic.c
	gcc -c src/quadratic.c -o obj/quadratic.o

clean:
	rm -f bin/* obj/*
	
app: bin/main
	bin/main
	
