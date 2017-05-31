#include <stdio.h>
#include <iostream>
#include "ForginWords.h"

using namespace std;

int switchfunc(int x);

int main()
{
   int x;
    
    cout << "1-Choice dictionary" << endl;
    cout << "2-Create personal dictionary" << endl;
    cout << "0-Exit"<< endl;
    cout << "Enter number point menu: ";
    cin>>x;
    switchfunc(x);
}
    
