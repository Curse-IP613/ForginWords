#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ForginWords.h"

using namespace std;

void checkNumber(int &number)
{
    cout << "Enter the number of words you want to enter\n";
    cin >> number;
    while (number <= 0) {
        cout << "Enter correct number of words: ";
        cin >> number;
    }
    
}

void createFile(char *filepath, char *word, char *namefile, int &number)
{
    cout << "Enter words (english.russian)\n";
    ofstream fout(filepath);
    for (int i = 0; i <= number; i++) {
        cin.getline(word, 80);
        fout << word;
        if (i > 0)
            fout << endl;
    }
    fout.close();
    cout << "Dictionary " << namefile << " is created\n";
}

int checkFile(char *filepath)
{
    char otvet;
    int number = 0;
    ifstream file;
    file.open(filepath);
    if (file) {
        cout << "File is exist. Do you want to replace this file? (Y/N)\n";
        cin >> otvet;
        checkanswer(otvet);
        
    } else
        return 3;
    return 0;
}
////////////////////////////////////
int checkanswer(otvet) {
			
        	if (otvet == 'Y' || otvet == 'y')
            return 1;
          else {
            if (otvet == 'N' || otvet == 'n')
                return 2;
            else
                do {
                    if (otvet == 'Y' || otvet == 'y') {
                        number = 1;
                        return 1;
                    } else {
                        if (otvet == 'N' || otvet == 'n') {
                            number = 1;
                            return 2;
                        } else
                            cout << "Enter Y or N !!!\nType your answer: ";
                    }
                    cin >> otvet;
                } while (number != 1);
		  }
	}
////////////////////////////////

int NewDic()
{
    int number = 0;
    char dirname[30] = "./dictionary/";
    char r[5] = ".txt";
    char namefile[10];
    char word[100];
    char filepath[50] = "";
    cout << "Enter file name\n";
    cin >> namefile;
    strncat(filepath, dirname, 30);
    strncat(filepath, namefile, 10);
    strncat(filepath, r, 4);
    switch (checkFile(filepath)) {
    case 1: {
        checkNumber(number);
        createFile(filepath, word, namefile, number);
        break;
    }
    case 2: {
        cout << "Enter file name\n";
        namefile[0] = 0;
        filepath[0] = 0;
        cin >> namefile;
        strncat(filepath, dirname, 30);
        strncat(filepath, namefile, 10);
        strncat(filepath, r, 4);
        checkNumber(number);
        createFile(filepath, word, namefile, number);
        break;
    }
    case 3: {
        checkNumber(number);
        createFile(filepath, word, namefile, number);
        break;
    }
    }
    return 0;
}



