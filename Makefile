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
	
test :
	make bin/dict-test
	bin/dict-test

bin/dict-test : build/test/main.o build/test/StartMenu-test.o
	@echo "Making binary"
	@g++ build/test/main.o build/test/StartMenu-test.o build/test/newdic.o build/test/dictionary.o -o bin/dict-test $(CFLAGS)

build/test/main.o : src/ForginWords.h test/main.c
	@echo "Making main.o"
	@g++ -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	@g++ -c src/newdic.c -o build/test/newdic.o $(CFLAGS) 
	@g++ -c src/dictionary.c -o build/test/dictionary.o $(CFLAGS)

build/test/StartMenu-test.o : src/ForginWords.h test/StartMenu-test.c
	@echo "Making StartMenu-test.o"
	@g++ -c -I thirdparty test/StartMenu-test.c -o build/test/StartMenu-test.o $(CFLAGS)

build/test/newdic.o : src/ForginWords.h src/newdic.c
	@echo "Making newdic.o"
	@g++ -c src/newdic.c -o build/test/newdic.o $(CFLAGS)
	
build/test/dictionary.o : src/ForginWords.h src/dictionary.c
	@echo "Making dictionary.o"
	@g++ -c src/dictionary.c -o build/test/dictionary.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/dict bin/dict-test
	@echo "All files have been cleaned."

-include build/*.d

