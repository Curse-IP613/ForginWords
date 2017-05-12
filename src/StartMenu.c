#include <stdio.h>

int switchfunc(int x);
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

int switchfunc(x){
Number = x;
	switch (Number) 
	{
    case 1:
       printf("Func 1 \n");
        return 1;
        break;
    case 2:
       printf("Func 2 \n");
        return 2;
        break;
    case 0:
        return 0;
        break;
    }	
}

