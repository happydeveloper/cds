ifeq ($(OS),Windows_NT)
    TARGET = main.exe
else
    TARGET = main.out
endif

all: main 

main: main.cpp helloworld.cpp platform.cpp
	g++ -o $(TARGET) main.cpp helloworld.cpp platform.cpp

clean:
	rm -f main.out main.exe