#include "tc_generateJSONArray.h"

#include "utils/json.h"

// TODO
START_TEST(test_) { ck_assert_msg(1 == 1, ""); }
END_TEST

TCase* test_case_generateJSONArray() {
  TCase* tc = tcase_create("generateJSONArray");
  tcase_add_test(tc, test_);
  // TODO
  return tc;
}
