CFLAGS = -g -Wall -ansi -pedantic

parse: phase3.lex phase3.y
	bison -v -d phase3.y
	flex phase3.lex
	g++ $(CFLAGS) -std=c++11 lex.yy.c phase3.tab.c -lfl -o phase3
test:
	cat ./tests/min/primes.min |./phase3 > ./Phase3/mil/primes.mil
	cat ./tests/min/mytest.min |./phase3 > ./Phase3/mil/mytest.mil
	cat ./tests/min/fibonacci.min |./phase3 > ./Phase3/mil/fibonacci.mil
	cat ./tests/min/errors.min |./phase3 > ./Phase3/mil/errors.mil
	cat ./tests/min/for.min |./phase3 > ./Phase3/mil/for.mil
