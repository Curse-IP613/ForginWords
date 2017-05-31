#include <dirent.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void dirlist()
{
    DIR *dir;
    struct dirent *ent;
    const char * d_name;
    char directory[255] = "../bin/dictionary/";
    dir = opendir(directory);
    while ((ent = readdir(dir)) != 0){
	d_name=ent->d_name;
	if (strncmp(d_name, ".", strlen(".")))
        cout << ent->d_name << endl;
	}
    closedir(dir);
}

int FileValidation(char file_name[20])
{
    ifstream file;
    file.open(file_name);
    if (!file){
        cout << "\nНе удается найти файл : " << file_name;
	getchar();
	return 0;
	}
	else return 1;
}

int ChoiceDict()
{	
    int rightans = 0;
    dirlist();
    cout << endl;	
    cout << "Введите название словаря: ";
    char fileopen[20];
    char dirname[30] = "../bin/dictionary/";
    char *estr;
    char str[50];
    char *point;
    int n, i;
    char otvet;
    int numotvet;
    cin >> fileopen;
    cout << endl;

    strncat(dirname, fileopen, 20);
    if(FileValidation(dirname)==0){
	//cout<<endl<<"func return 0"<< endl << endl;
	return 0;
	}
    FILE *pf;
    pf = fopen(dirname, "r");
    if (pf == NULL) {
        cout << " ERROR !!! \n";
        return -1;
    } else
        cout << "Приготовьтесь! \n";
	cout << endl;

    while (1) {
        estr = fgets(str, sizeof(str), pf);

        if (estr == NULL) {
            if (feof(pf) != 0) {
                cout << "\n Поздравляем! Вы закончили данный словарь \n";
                break;
            } else {
                cout << "\n ERROR of reading file \n";
                break;
            }
        }

        point = strstr(str, ".") + 1;
        n = strcspn(str, point) - 1;
        for (i = 0; i < n; i++)
            cout << str[i];
        cout << "\n Вы знаете перевод?[Y/N]: ";
        cin >> otvet;

        if (otvet == 'Y' || otvet == 'y') {
	      rightans ++;
	      cout << endl;
           // cout << "next: \n ";
        } else if (otvet == 'N' || otvet == 'n') {
            cout << point << endl;
        } else
            do {
                cout << "Введите корректный ответ!\n";
		cout << endl;
                numotvet = 0;
                cin >> otvet;
                if (otvet == 'Y' || otvet == 'y') {
	            rightans ++;
		    cout << endl;
                    numotvet = 1;
                    cout << "next: \n ";
                } else if (otvet == 'N' || otvet == 'n') {
                    numotvet = 1;
                    cout << "  RUS: " << point << endl;
                }
            } while (numotvet != 1);
    }
    cout << "       Вы знаете " << rightans << " слов(а)" << endl;
    if (rightans == 10)
	cout <<"Вы просто невероятны! Наши поздравления!"<<endl;
    else if (rightans > 5)
	cout <<"Отлично, мы уверены вы можете лучше!"<<endl;  
    else 
	cout <<"Мы верим, вы можете лучше! Попробуйте еще раз!"<<endl;
    getchar();
    if (fclose(pf) == EOF)
        cout << "ERROR \n";
    else
        cout << "Exit... \n";

    return 0;
}
