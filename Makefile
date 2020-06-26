CC=gcc
INC_DIRS = -Iinclude/
CFLAGS = -std=c++17 -c -Wall -Wextra -Werror

test: clean mk obj/main.o obj/pipeline.o obj/reader.o obj/word.o obj/util.o drip run 

all: clean mk obj/main.o obj/pipeline.o obj/reader.o obj/word.o obj/util.o drip

drip:
	@ gcc obj/*.o -lstdc++ -o bin/drip
	@ echo "Compilation finished. drip is in bin/ folder."

obj/main.o: src/main.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/main.cpp -o obj/main.o

obj/pipeline.o: src/pipeline/pipeline.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/pipeline/pipeline.cpp -o obj/pipeline.o

obj/reader.o: src/reader/reader.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/reader/reader.cpp -o obj/reader.o

obj/word.o: src/word/word.cpp src/word/wordData.cpp 
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/word/word.cpp -o obj/word.o
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/word/wordData.cpp -o obj/wordData.o

obj/util.o: src/util/util.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/util/util.cpp -o obj/util.o

mk:
	@ echo "Create bin/ obj/ folders."
	@ mkdir -p obj/
	@ mkdir -p bin/

clean:
	@ echo "Clean bin/ obj/ folders."
	@ rm -rf obj/
	@ rm -rf bin/

run:
	@ ./bin/drip -q ./data/Queries.dat \
				-i ./data/Index \
				-w ./data/Words.dat \
				-r 1 \
				-s 1