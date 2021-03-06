/*
 ============================================================================
 Name        : fibonacci_test.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "fibonacci.h"

#define TEST 16

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_fibonacci(){
	CU_ASSERT_EQUAL(fibonacci(ONE),ZERO);
	CU_ASSERT_EQUAL(fibonacci(TWO),ONE);
	CU_ASSERT_EQUAL(fibonacci(fibonacci(TWO)),ZERO);
	CU_ASSERT_EQUAL(fibonacci(TWO),fibonacci(TWO)+fibonacci(ONE));
	CU_ASSERT_EQUAL(fibonacci(TEST),fibonacci(TEST-ONE)+fibonacci(TEST-TWO));
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE A",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of fibonacci()",test_fibonacci);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
