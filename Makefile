all: bin/main_binka

bin/main_binka: obj/main.o obj/quadratic.o
gcc -o bin/main_binka obj/main.o obj/quadratic.o -lm

bin/test: obj/quadratic.o obj/quad_test.o obj/cmain.o
gcc -Wall -o bin/test obj/quadratic.o obj/quad_test.o obj/cmain.o -lm

obj/main.o: src/main.c
gcc -c src/main.c -o obj/main.o

obj/quadratic.o: src/quadratic.c
gcc -c src/quadratic.c -o obj/quadratic.o

obj/quad_test.o: test/quad_test.c
gcc -Wall -c test/quad_test.c -o obj/quad_test.o -Ithirdparty -Isrc

obj/cmain.o: test/main.c
gcc -Wall -c test/main.c -o obj/cmain.o -Ithirdparty

clean:
rm -f bin/* obj/*
	
quadratic: bin/main_binka
	bin/main_binka

test: bin/test
	bin/test
