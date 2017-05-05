#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int checkNumber (int &number)
{
    cout << "Enter the number of words you want to enter\n";
    cin >> number;
while(number<=0){
 
 cout << "Enter correct number of words: ";
cin >> number;
}
}

int main()
{
    int number = 0;
    char dirname[30] = "./dictionary/";
    char r[5] = ".txt";
    char namefile[10];
    char word[100];
    cout << "Enter file name\n";
    cin >> namefile;
    strncat(namefile, r, 4);
    strncat(dirname, namefile, 10);
checkNumber (number);
    cout << "Enter words (english.russian)\n";
    ofstream fout(dirname);
    for (int i = 0; i <= number; i++) {
        gets(word);
        fout << word;
        if (i > 0)
            fout << endl;
    }
    fout.close();
    cout << "Dictionary " << namefile << " created\n";
    return 0;
}

