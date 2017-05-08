#include <stdio.h>
#include <iostream>
#include "ForginWords.h"
#include "dictionary.c"
#include "newdic.c"
using namespace std;


int main()
{
    int Number;
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    scanf("%i", &Number);
    switch (Number) {
    case 1:
        printf("Func 1 \n");
	ChoiceDict();
        break;
    case 2:
{
        printf("Func 2 \n");
	NewDic();
        break;
}
    case 0:
        return 0;
        break;
    }
}

