#include <check.h>
#include "../src/header.h"

START_TEST(checking_for_missing_roots)
{
    struct roots example = solve_equation(2, 1, 2);
    fail_unless(example.size == 0, "There shouldn't be a single root here.");
}
END_TEST

START_TEST(checking_for_one_root)
{
    struct roots example = solve_equation(2, 4, 2);
    fail_unless(example.size == 1, "There should be one root here");
    fail_unless(example.x[0] == -1, "The root must be -1");
    
}
END_TEST

START_TEST(checking_for_two_root)
{
    struct roots example = solve_equation(2, 3, 1);
    fail_unless(example.size == 2, "There should be two roots here");
    fail_unless(example.x[0] == -0.5, "The first root must be -0.5");
    fail_unless(example.x[1] == -1, "The second root must be -1");
}
END_TEST

START_TEST(ñhecking_for_quadraticity)
{
    struct roots example = solve_equation(0, 3, 1);
    fail_unless(example.size == 0, "The equation must be quadratic");
]
}
END_TEST


int main(void)
{
    Suite* s1 = suite_create("Core");
    TCase* tc1_1 = tcase_create("Core");
    SRunner* sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, checking_for_missing_roots);
    tcase_add_test(tc1_1, checking_for_one_root);
    tcase_add_test(tc1_1, checking_for_two_root);
    tcase_add_test(tc1_1, ñhecking_for_quadraticity);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}