#include <stdlib.h>
#include <check.h>
#include <stdio.h>
#include "../fizzbuzz.h"
#include "fizzbuzz_test.h"

START_TEST(should_return_three) {
  ck_assert_str_eq(fizzbuzz, "3");
  free(postfix);
}
END_TEST


Suite *fizzbuzz_suite(void) {
  Suite *s;
  TCase *tc_fizzbuzz;

  s = suite_create("fizzbuzz test suite");

  tc_fizzbuzz = tcase_create("Some Tests");

  tcase_add_test(tc_fizzbuzz, should_return_three);

  suite_add_tcase(s, tc_fizzbuzz);

  return s;
}
