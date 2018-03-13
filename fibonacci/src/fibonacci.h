/*
 * fibonacci.h
 *
 *  Created on:
 *      Author:
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_

/**
 * Restituisce il numero appartenente alla serie di Fibonacci
 * e corrispondente alla posizione indicata dal parametro position
 * @pre il parametro position deve essere un numero intero maggiore di 0
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
