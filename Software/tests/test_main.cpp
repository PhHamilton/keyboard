#include "acutest.h"

void dummy_test()
{
    TEST_CHECK(1==1);
}

TEST_LIST =
{
    {"Dummy test", dummy_test},
    {0}
};
