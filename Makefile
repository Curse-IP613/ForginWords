CFLAGS = -Wall -Werror -MP -MMD 
.PHONY: clean all dict test

all :
	make bin/dict

bin/dict : build/StartMenu.o build/dictionary.o build/newdic.o
	g++ build/StartMenu.o build/dictionary.o build/newdic.o -o bin/dict $(CFLAGS)

build/StartMenu.o : src/StartMenu.cpp src/ForginWords.h
	g++ -c src/StartMenu.cpp -o build/StartMenu.o $(CFLAGS)

build/dictionary.o : src/dictionary.cpp src/ForginWords.h
	g++ -c src/dictionary.cpp -o build/dictionary.o $(CFLAGS)

build/newdic.o : src/newdic.cpp src/ForginWords.h
	g++ -c src/newdic.cpp -o build/newdic.o $(CFLAGS)
	
clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/dict bin/dict-test
	@echo "All files have been cleaned."

-include build/*.d

