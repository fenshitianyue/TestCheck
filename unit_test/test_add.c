#include "../include/Check.h"
#include "../include/add.h"

START_TEST(test_add){
  fail_unless(add(2, 3) == 5, "error, 2 + 3 != 5");
}
END_TEST

Suite* make_add_suite(void){
  Suite* s = suite_create("Add"); //建立测试套件
  TCase* tc_add = tcase_create("add"); //建立测试用例集
  suite_add_tcase(s, tc_add); //把测试用例集加入到套件中
  tcase_add_test(tc_add, test_add); //将测试用例添加到测试集中
  return s;
}
