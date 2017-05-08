#include <stdio.h>
#include <iostream>
#include "ForginWords.h"
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

