#include <stdio.h>

main()
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
        printf("Func 2 \n");
        break;
    case 0:
        return 0;
        break;
    }
}

