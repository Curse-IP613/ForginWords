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
    cout << "1-Choice dictionary"<< endl;
    cout << "2-Create personal dictionary"<< endl;
    cout << "0-Exit"<< endl;
    cout << "Enter number point menu: "<< endl;
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


/*#include <stdio.h>
#include <iostream>
#include "ForginWords.h"

using namespace std;

int main()
{
    int Number;
    while(1)
{
   // system ("CLS");
    printf("1-Choice dictionary \n");
    printf("2-Create personal dictionary \n");
    printf("0-Exit \n");
    printf("Enter number point menu: \n");
    cin>>Number;
    switch (Number) {
    case 1:
{
	//system ("CLS");
	ChoiceDict();
	getchar();
        break;
}
    case 2:
{
	//system ("CLS");
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
*/
/*#include <stdio.h>
#include <iostream>
#include "ForginWords.h"

using namespace std;

int switchfunc(int x);

int main()
{
 int Number;
    while(Number !=0 )
{
   int x;
    
    cout << "1-Choice dictionary" << endl;
    cout << "2-Create personal dictionary" << endl;
    cout << "0-Exit"<< endl;
    cout << "Enter number point menu: ";
    cin>>x;
    //switchfunc(x);
    Number = switchfunc(x);
}
    }

 int switchfunc(int x){
    switch (x) {
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
}*/
