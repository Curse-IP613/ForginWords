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


CTEST(test_number_one, switchfunc)
{
    // Given
    const int a = 2;
    
    
    // When
    int result = switchfunc (a);

    // Then
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

///************************************///

CTEST(test_number_one, switchfunc)
{
    // Given
    const int a = 0;
    
    
    // When
    int result = switchfunc (a);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
