#include <stdio.h>
#include <iostream>
#include "ForginWords.h"
#include "newdic.c"
using namespace std;

int main()
{
    int Number;
    while(1)
{
    system ("clear");
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    scanf("%i", &Number);
    switch (Number) {
    case 1:
	system ("clear");
        printf("Func 1 \n");
	getchar();
        break;
    case 2:
{
	system ("clear");
	NewDic();
	getchar();
        break;
}
    case 0:
        return 0;
        break;
    }
}
}

