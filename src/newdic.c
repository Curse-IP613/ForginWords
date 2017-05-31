#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void checkNumber(int &number)
{
    cout << "Сколько слов вы хотите добавить?: ";
    cin >> number;
    cout << endl;
    while (number <= 0) {
        cout << "Введите корректное число: ";
        cin >> number;
    }
}

void createFile(char *filepath, char *word, char *namefile, int &number)
{
    cout << "Введите слова (word.translate)\n";
    ofstream fout(filepath);
    for (int i = 0; i <= number; i++) {
        cin.getline(word, 80);
        fout << word;
        if (i > 0)
            fout << endl;
    }
    fout.close();
    cout << "Словарь " << namefile << " создан\n";
    cout << endl;
}

int checkFile(char *filepath)
{
    char otvet;
    int number = 0;
    ifstream file;
    file.open(filepath);
    if (file) {
        cout << "Файл уже существует. Хотите заменить его? (Y/N): ";
        cin >> otvet;
	cout << endl;
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
                            cout << "Введите Y или N !!!\n ";
                    }
                    cin >> otvet;
                } while (number != 1);
        }
    } else
        return 3;
    return 0;
}

int NewDic()
{
    int number = 0;
    char dirname[30] = "../bin/dictionary/";
    char r[5] = ".txt";
    char namefile[30];
    char word[100];
    char filepath[60] = "";
    cout << "Введите название словаря: ";
    cin >> namefile;
    cout << endl;
    strncat(filepath, dirname, 30);
    strncat(filepath, namefile, 30);
    strncat(filepath, r, 4);
    switch (checkFile(filepath)) {
    case 1: {
        checkNumber(number);
        createFile(filepath, word, namefile, number);
        break;
    }
    case 2: {
        cout << "Введите название словаря: " ;
        namefile[0] = 0;
        filepath[0] = 0;
        cin >> namefile;
	cout << endl;
        strncat(filepath, dirname, 30);
        strncat(filepath, namefile, 30);
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

