all: ./main.cpp ./src/participant.cpp ./src/global.cpp ./src/sentence.cpp
	g++ -o "./build/typit" ./main.cpp ./src/participant.cpp ./src/global.cpp ./src/sentence.cpp
	
run:
	./build/typit

clean:
	rm -f ./build/*

clean(win):
	del /f build\*