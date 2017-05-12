CFLAGS = -Wall -Werror -MP -MMD 
.PHONY: clean all dictionary test

all :
	make bin/dictionary

bin/dictionary : build/dictionary.o build/dictionary.o
	gcc build/dictionary.o build/dictionary.o -o bin/dictionary $(CFLAGS)

build/dictionary.o : src/dictionary.c src/dictionary.h
	gcc -c src/dictionary.c -o build/dictionary.o $(CFLAGS)

build/dictionary.o : src/dictionary.c src/dictionary.h
	gcc -c src/dictionary.c -o build/dictionary.o $(CFLAGS)
	
test :
	make bin/dictionary-test
	bin/dictionary-test

bin/dictionary-test : build/test/dictionary.o build/test/dictionary.o
	@echo "Making binary"
	@gcc build/test/dictionary.o build/test/dictionary.o build/test/dictionary.o -o bin/dictionary-test $(CFLAGS)

build/test/dictionary.o : src/dictionary.h test/dictionary.c
	@echo "Making dictionary.o"
	@gcc -I thirdparty -c test/dictionary.c -o build/test/dictionary.o $(CFLAGS)
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
