
all: demo

demo: Point.o Segment.o Triangle.o main.o
	g++ $^ -o demo

%.o: src/%.cpp include/%.h
	g++ -Iinclude -c $< -o $@

main.o: main.cpp include/Point.h include/Triangle.h
	g++ -Iinclude -c main.cpp -o main.o

clean:
	rm -f *.o demo
