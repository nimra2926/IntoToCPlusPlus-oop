all: ./a.out

compRun:
	g++ -std=c++11 main.cpp Function.cpp Function.h -o r.out

compTest:
	g++ -std=c++11 test.cpp Function.cpp Function.h -o a.out

test: clean compTest; ./a.out

run: clean compRun; ./r.out

clean:
	rm -f *.out
