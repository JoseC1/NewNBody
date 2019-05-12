#MakeFile

main: *.cpp
	@g++ *.cpp -o main

edit:
	@vim main.cpp
clean:
	@rm main
run:
	@./main
