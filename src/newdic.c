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

void createFile(char* filepath, char* word, char* namefile, int &number){
    cout << "Enter words (english.russian)\n";
    ofstream fout(filepath);
    for (int i = 0; i <= number; i++) {
        gets(word);
        fout << word;
        if (i > 0)
            fout << endl;
    }
    fout.close();
    cout << "Dictionary " << namefile << " created\n";
}

int main()
{
    int number = 0;
    char dirname[30] = "./dictionary/";
    char r[5] = ".txt";
    char namefile[10];
    char word[100];
    char filepath[50]="";
    cout << "Enter file name\n";
    cin >> namefile;
    strncat(filepath, dirname, 30);
    strncat(filepath, namefile, 10);
    strncat(filepath, r, 4); 
checkNumber (number);
createFile(filepath, word, namefile, number);
    return 0;
}

