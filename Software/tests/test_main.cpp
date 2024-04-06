#include "acutest.h"
#include "ledHandlerTests.h"

void dummy_test()
{
    TEST_CHECK(1==1);
}

TEST_LIST =
{
    {"Dummy test", dummy_test},
    {"LedHandler error tests", test_disaply_binary_numbers},
    {0}
};
