#include <stdio.h>
#include <iostream>
#include "ForginWords.h"
#include "dictionary.c"
#include "newdic.c"
//#include "onefile.c"
using namespace std;

//int Number;

/*int main()
{
    int x;  
   // system ("clear");
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    cin>>x;
    switchfunc(x);
}

int switchfunc(int x){
int Number = x;
    switch (Number) {
    case 1:
{
	//system ("clear");
	ChoiceDict();
	getchar();
        return 1;
        break;
}
    case 2:
{
	//system ("clear");
	NewDic();
	getchar();
        return 2;
        break;
}
    case 0:
{
        return 0;
        break;
}
   default: break;
    }
}

*/
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
    cin>>Number;
    switch (Number) {
    case 1:
{
	system ("clear");
	ChoiceDict();
	getchar();
        break;
}
    case 2:
{
	system ("clear");
	NewDic();
	getchar();
        break;
}
    case 0:{
        return 0;
        break;
}
   default: break;
    }
}
}
