CFLAGS = -g -Wall -ansi -pedantic

parse: mini_l.lex mini_l.y
	bison -v -d mini_l.y
	flex mini_l.lex
	g++ $(CFLAGS) -std=c++11 lex.yy.c mini_l.tab.c -lfl -o phase3
test:
	#cat ./tests/min/primes.min |./phase3 > ./Phase3/mil/primes.mil
	#cat ./tests/min/mytest.min |./phase3 > ./Phase3/mil/mytest.mil
	#cat ./tests/min/fibonacci.min |./phase3 > ./Phase3/mil/fibonacci.mil
	#cat ./tests/min/errors.min |./phase3 > ./Phase3/mil/errors.mil
	#cat ./tests/min/for.min |./phase3 > ./Phase3/mil/for.mil
	cat fibonacci.min | ./phase3 > ./fibonacci.mil
