#include <stdio.h>


int switchfunc(int x);
int Number;
main()
{
	int x;
    //int Number;
   // scanf("%i", &x);
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    scanf("%i", &x);
    switchfunc(x);
    
  /*  switch (y) 
	{
    case 1:
        printf("Func 1 \n");
        break;
    case 2:
        printf("Func 2 \n");
        break;
    case 0:
        return 0;
        break;
    }	
}
*/
}
int switchfunc(x){


//scanf("%i", &Number);
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

