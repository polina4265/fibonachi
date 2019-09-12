all: build

build:
	echo "polly"
	gcc z3.cpp -lstdc++
	chmod +x a.out

install:
	./a.out

clean:
	rm a.out
