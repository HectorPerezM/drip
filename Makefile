CC=gcc
INC_DIRS = -Iinclude/
CFLAGS = -std=c++17 -c -Wall -Wextra -Werror

all: clean mk obj/main.o obj/pipeline.o drip run

drip:
	@ gcc obj/*.o -lstdc++ -o bin/drip
	@ echo "Compilation finished. drip is in bin/ folder."

obj/main.o: src/main.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/main.cpp -o obj/main.o

obj/pipeline.o: src/pipeline/pipeline.cpp
	@ $(CC)  $(CFLAGS) $(INC_DIRS) src/pipeline/pipeline.cpp -o obj/pipeline.o

mk:
	@ echo "Create bin/ obj/ folders."
	@ mkdir -p obj/
	@ mkdir -p bin/

clean:
	@ echo "Clean bin/ obj/ folders."
	@ rm -rf obj/
	@ rm -rf bin/

run:
	@ ./bin/drip