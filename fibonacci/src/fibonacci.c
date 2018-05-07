/*
 * fibonacci.c
 *
 *  Created on: 20 aprile 2018
 *      Author: Gabriele Fortunato
 */

#include "fibonacci.h"

int fibonacci(int position){
	assert(position>ZERO);
	return (position<=TWO)?position-ONE:fibonacci(position-ONE)+fibonacci(position-TWO);
}

static void print_serie_declaration(FILE* file){
	fprintf(file,NEW_LINE SERIE NEW_LINE NEW_LINE);
}

static void print_new_line(FILE* file){
	fprintf(file,NEW_LINE);
}

static void print_separator_line(FILE* file){
	fprintf(file,SEPARATOR_LINE);
}

static void print_lines(FILE* file, int position){
	if (position<NUMBERS)
		(position%NUMBERS_FOR_LINE==ZERO)?print_new_line(file):print_separator_line(file);
}

static void print_number(FILE* file, int position){
	fprintf(file,NUMBER,position,fibonacci(position));
	print_lines(file,position);
}

static void print_numbers(FILE* file){
	for (int i=ONE;i<=NUMBERS;i++)
		print_number(file,i);
}

void print_fibonacci_list(FILE* file){
	assert(file!=NULL);
	print_serie_declaration(file);
	print_numbers(file);
}
