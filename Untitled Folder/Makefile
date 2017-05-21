CFLAGS = -Wall -Werror -MP -MMD 
.PHONY: clean all dictionary-m test

all :
	make bin/dictionary-m

bin/dictionary-m : build/dictionary.o build/onefile.o
	g++ build/dictionary.o build/onefile.o -o bin/dictionary-m $(CFLAGS)

build/dictionary.o : src/StartMenu.c src/ForginWords.h
	g++ -c src/StartMenu.c -o build/dictionary.o $(CFLAGS)

build/onefile.o : src/onefile.c src/ForginWords.h
	g++ -c src/onefile.c -o build/onefile.o $(CFLAGS)
	
test :
	make bin/dictionary-m-test
	bin/dictionary-m-test

bin/dictionary-m-test : build/test/dictionary.o build/test/onefile-test.o
	@echo "Making binary"
	@g++ build/test/dictionary.o build/test/onefile-test.o build/test/onefile.o -o bin/dictionary-m-test $(CFLAGS)

build/test/dictionary.o : src/ForginWords.h test/StartMenu.c
	@echo "Making dictionary.o"
	@g++ -I thirdparty -c test/StartMenu.c -o build/test/dictionary.o $(CFLAGS)
	@g++ -c src/onefile.c -o build/test/onefile.o $(CFLAGS) 

build/test/onefile-test.o : src/ForginWords.h test/StartMenu-test.c
	@echo "Making onefile-test.o"
	@g++ -c -I thirdparty test/StartMenu-test.c -o build/test/onefile-test.o $(CFLAGS)

build/test/onefile.o : src/ForginWords.h src/onefile.c
	@echo "Making onefile.o"
	@g++ -c src/onefile.c -o build/test/onefile.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/dictionary-m bin/dictionary-m-test
	@echo "All files have been cleaned."

-include build/*.d

