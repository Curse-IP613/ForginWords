#include <stdio.h>
#include <iostream>
#include "ForginWords.h"

using namespace std;
void greeting();
int main()
{	
    greeting();
    int Number;
    while(1)
{
    //system ("clear");
    cout << "====================================="<< endl;
    cout << "||   1 - Выбрать словарь           ||"<< endl;
    cout << "||   2 - Создать свой словарь      ||"<< endl;
    cout << "||   0 - Выйти                     ||"<< endl; 
    cout << "====================================="<< endl << endl;;
    cout << "Введите один из пунктов меню: ";
    cin>>Number;
    cout << endl;
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

void greeting(){
cout << "======================================================="<< endl;
cout << "||              Добро пожаловать!                    ||" << endl 
<< "||         Заучивание иностранных слов               ||" << endl
<< "||                 Version: 1.0                      ||" << endl 
<< "||     Developers: Атажанов, Бережинский, Семин      ||" << endl; 
cout << "======================================================="<< endl << endl;;
}

