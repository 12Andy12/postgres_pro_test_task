#include <check.h>
#include "../src/header.h"

START_TEST(checking_tests_for_correctness)
{
    fail_unless(5 == 5, "this should be successful");
}
END_TEST


int main(void)
{
    Suite* s1 = suite_create("Core");
    TCase* tc1_1 = tcase_create("Core");
    SRunner* sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, checking_tests_for_correctness);
    //tcase_add_test(tc1_1, ñhecking_tests_for_correctness);
    //tcase_add_test(tc1_1, ñhecking_tests_for_correctness);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}