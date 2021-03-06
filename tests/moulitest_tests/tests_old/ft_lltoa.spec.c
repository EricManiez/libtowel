#include "project.h"
#include <limits.h>

UT_TEST(twl_lltoa)
{
	UT_ASSERT(strcmp(twl_lltoa(0L), "0") == 0);
	UT_ASSERT(strcmp(twl_lltoa(1L), "1") == 0);
	UT_ASSERT(strcmp(twl_lltoa(-1L), "-1") == 0);
	UT_ASSERT(strcmp(twl_lltoa(42L), "42") == 0);
	UT_ASSERT(strcmp(twl_lltoa(LLONG_MAX), "9223372036854775807") == 0);
	UT_ASSERT(strcmp(twl_lltoa(LLONG_MIN), "-9223372036854775808") == 0);
	UT_ASSERT(strcmp(twl_lltoa(LLONG_MIN + 1L), "-9223372036854775807") == 0);
}
