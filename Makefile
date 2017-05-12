CFLAGS = -Wall -Werror -MP -MMD 
.PHONY: clean all dictionary test

all :
	make bin/dictionary

bin/dictionary : build/main.o build/dictionary.o
	gcc build/main.o build/dictionary.o -o bin/dictionary $(CFLAGS)

build/main.o : src/main.c src/dictionary.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/dictionary.o : src/dictionary.c src/dictionary.h
	gcc -c src/dictionary.c -o build/dictionary.o $(CFLAGS)
	
test :
	make bin/dictionary-test
	bin/dictionary-test

bin/dictionary-test : build/test/main.o build/test/dictionary.o
	@echo "Making binary"
	@gcc build/test/main.o build/test/dictionary.o build/test/dictionary.o -o bin/dictionary-test $(CFLAGS)

build/test/main.o : src/dictionary.h test/main.c
	@echo "Making main.o"
	@gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	@gcc -c src/dictionary.c -o build/test/dictionary.o $(CFLAGS) 

build/test/dictionary-test.o : src/dictionary.h test/dictionary.c
	@echo "Making dictionary-test.o"
	@gcc -c -I thirdparty test/dictionary-test.c -o build/test/dictionary.o $(CFLAGS)

build/test/dictionary.o : src/dictionary.h src/dictionary.c
	@echo "Making dictionary.o"
	@gcc -c src/dictionary.c -o build/test/dictionary.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/dictionary bin/dictionary-test
	@echo "All files have been cleaned."

-include build/*.d
