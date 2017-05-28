#include <ctest.h>
#include "../src/ForginWords.h"

CTEST(test_number_1, switchfunc)
{
    // Given
   // const int a = 1;
    
    
    // When
    int result = switchfunc (1);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

///************************************///


CTEST(test_number_2, switchfunc)
{
    // Given
   // const int a = 2;
    
    
    // When
    int result = switchfunc (2);

    // Then
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

///************************************///

CTEST(test_number_3, switchfunc)
{
    // Given
 //   const int a = 0;
    
    
    // When
    int result = switchfunc (0);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
///************************************///

/*CTEST(test_number_4, checkanswer)
{
    // Given
    const int a = 'Y';
    
    
    // When
    int result = checkNumber (a);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}



*/

///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///

