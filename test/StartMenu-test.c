#include <ctest.h>
#include "../src/ForginWords.h"

CTEST(test_name_engadj, FileValidation)
{ 
    // When
    int result = FileValidation(engadj);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/
CTEST(test_name_hello, FileValidation)
{ 
    // When
    int result = FileValidation(hello);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/
CTEST(test_name_spannouns, FileValidation)
{ 
    // When
    int result = FileValidation(spannouns);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/
CTEST(test_name_engnouns, FileValidation)
{ 
    // When
    int result = FileValidation(engnouns);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/
CTEST(test_name_43, FileValidation)
{ 
    // When
    int result = FileValidation(43);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/
CTEST(test_name_spanverbs, FileValidation)
{ 
    // When
    int result = FileValidation(spanverbs);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_checknumb_otr1, checkNumber)
{ 
    // When
    int result = checkNumber(-1);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_checknumb_2, checkNumber)
{ 
    // When
    int result = checkNumber(2);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_checknumb_10, checkNumber)
{ 
    // When
    int result = checkNumber(10);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_checknumb_otr10, checkNumber)
{ 
    // When
    int result = checkNumber(-10);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_checknumb_0, checkNumber)
{ 
    // When
    int result = checkNumber(0);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_1, concl)
{ 
    // When
    int result = concl(0);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_1, concl)
{ 
    // When
    int result = concl(1);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_3, concl)
{ 
    // When
    int result = concl(3);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_5, concl)
{ 
    // When
    int result = concl(5);

    // Then
    int expected = 5;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_4, concl)
{ 
    // When
    int result = concl(4);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_10, concl)
{ 
    // When
    int result = concl(10);

    // Then
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}

/*************************/

CTEST(test_concl_9, concl)
{ 
    // When
    int result = concl(9);

    // Then
    int expected = 5;
    ASSERT_EQUAL(expected, result);
}









///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///
///************************************///

