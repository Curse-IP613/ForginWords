#include <stdio.h>
#include <iostream>
#include "ForginWords.h"
#include "dictionary.c"
#include "newdic.c"
using namespace std;


int Number;
main()
{
	int x;
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    scanf("%i", &x);
    switchfunc(x);    
}



