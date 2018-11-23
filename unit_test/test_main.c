#include "../include/unit_test.h"
#include <stdlib.h>

int main() {
  int n;  
  SRunner* sr;
  sr = srunner_create(make_add_suite()); //把Suite加入到SRunner里
  srunner_run_all(sr, CK_NORMAL); //运行所有测试用例
  n = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (0 == n) ? EXIT_SUCCESS : EXIT_FAILURE;
}
