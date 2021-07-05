all: main.cpp
	g++ "main.cpp" -o "typit"
	
run: typit
	./typit
