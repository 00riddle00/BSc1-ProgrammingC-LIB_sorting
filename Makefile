CC=gcc
CFLAGS=-Wall -Wextra -xc -g -std=gnu99

lib_sorting.so: object_files/*.o
	gcc --shared -lm -o lib_sorting.so object_files/*.o 
	cp lib_sorting.so ${LD_LIBRARY_PATH}

clean:
	rm lib_sorting.so

rebuild: clean lib_sorting.so
