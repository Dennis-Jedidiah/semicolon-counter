all: main

main: main.cpp
	g++ main.cpp -o main.exe
	./main.exe

clean:
	rm main.exe