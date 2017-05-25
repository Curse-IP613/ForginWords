#include <stdio.h>
#include <iostream>
#include "ForginWords.h"

using namespace std;

int main()
{
    int Number;
    while(1)
{
    //system ("clear");
    cout << "1-Choice dictionary";
    cout << "2-Create personal dictionary";
    cout << "0-Exit";
    cout << "Enter number point menu: ";
    cin>>Number;
    switch (Number) {
    case 1:
{
	//system ("clear");
	ChoiceDict();
	getchar();
        break;
}
    case 2:
{
	//system ("clear");
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

