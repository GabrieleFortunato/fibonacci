/*
 * fibonacci.h
 *
 *  Created on: 29 set 2017
 *      Author: gabriele
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define ZERO       		  0
#define ONE        		  1
#define TWO        		  2
#define NUMBERS_FOR_LINE  4
#define NUMBERS			  40
#define FILE_NAME         "fibonacci.txt"
#define FILE_MODE  		  "w"
#define NEW_LINE          "\n"
#define SEPARATOR_LINE    "-"
#define PRINT_NUMBER      "Posizione numero %2d: numero %9d"
#define PRINT_SERIE       "SERIE DI FIBONACCI"

/**
 * Restituisce il numero appartenente alla serie di Fibonacci
 * e corrispondente alla posizione indicata dal parametro position
 * @pre il parametro position deve essere un numero inero maggiore di 0
 * @param position
 * @return
 */
int fibonacci(int position);

/**
 * Stampa su file i primi 40 numeri appartenti alla seria di Fibonacci
 * @pre il file deve essere aperto
 * @param file
 */
void print_fibonacci_list(FILE* file);

#endif /* FIBONACCI_H_ */
