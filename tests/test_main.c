#include <check.h>
#include <stdlib.h>
#include <stdio.h>
#include "fizzbuzz_test.h"

int main() {
  int number_failed;
  Suite *fizzbuzz;
  SRunner *sr;

  fizzbuzz = fizzbuzz_suite();

  sr = srunner_create(fizzbuzz);
  srunner_add_suite(sr, fizzbuzz); 

  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
