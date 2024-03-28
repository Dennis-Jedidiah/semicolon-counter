all: main

main: main.cpp
	g++ main.cpp -o main.exe

clean:
	rm main.exe