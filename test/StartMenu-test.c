#include <ctest.h>
#include "../src/StartMenu.c"

CTEST(test_number_one, switchfunc)
{
    // Given
    const int a = 1;
    
    
    // When
    int result = switchfunc (a);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

///************************************///

