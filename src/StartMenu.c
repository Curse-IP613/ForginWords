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
    cout << "1-Choice dictionary" << endl;
    cout << "2-Create personal dictionary" << endl;
    cout << "0-Exit"<< endl;
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

