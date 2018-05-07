/*
 ============================================================================
 Name        : fibonacci_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "fibonacci.h"

int main(int argc, char* argv[]) {
	FILE* file = fopen(argv[ONE],argv[TWO]);
	print_fibonacci_list(file);
	fclose(file);
	return EXIT_SUCCESS;
}
