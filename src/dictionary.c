#include <dirent.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int concl(int);

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
        cout <<"|| "<< ent->d_name << endl;
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
    cout << "====================================="<< endl << endl;
    dirlist();
    cout << endl;
    cout << "====================================="<< endl;	
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
	return 0;
	}
    FILE *pf;
    pf = fopen(dirname, "r");
    if (pf == NULL) {
        cout << " ERROR !!! \n";
        return -1;
    } else
        cout << "Начинаем! \n";
	cout << endl;

    while (1) {
        estr = fgets(str, sizeof(str), pf);

        if (estr == NULL) {
            if (feof(pf) != 0) {
		cout << endl << "===================================================="<< endl;
                cout << "||    Поздравляем! Вы закончили данный словарь    ||\n";
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
	cout << endl;
	cout <<"_______________________";
        cout << "\nВы знаете перевод?[Y/N]: ";
        cin >> otvet;
        if (otvet == 'Y' || otvet == 'y') {
	      rightans ++;
	      cout << endl << endl;
	      cout << endl;
        } else if (otvet == 'N' || otvet == 'n') {
            cout << "\nЗапомни перевод: " << point << endl<< endl <<endl;
        } else
            do {
		cout << endl << "============================="<< endl;
                cout << "||Введите корректный ответ!||\n";
		cout << "=============================";
                numotvet = 0;
		cout <<endl;
		cout <<"_______________________";
        	cout << "\nВы знаете перевод?[Y/N]: ";
        	cin >> otvet;
                if (otvet == 'Y' || otvet == 'y') {
	            rightans ++;
		    cout << endl;
                    numotvet = 1;
                    cout << endl;
                } else if (otvet == 'N' || otvet == 'n') {
                    numotvet = 1;
		    cout << endl;
                    cout << "Запомни перевод: " << point << endl<< endl <<endl;
                }
            } while (numotvet != 1);
    }
	concl(rightans);
    getchar();
    if (fclose(pf) == EOF)
        cout << "ERROR \n";
    else
        cout << "Exit... \n";

    return 0;
}

int concl(int x){
 cout << "||           Вы знаете " << x << "/10 слов(а)               ||" << endl;
    if (x == 10){
	cout <<"||     Вы просто невероятны! Наши поздравления!   ||"<<endl;
	cout << "===================================================="<< endl;
	return 10;    
    }
	else if (x >= 5){
	cout <<"||     Отлично, мы уверены вы можете лучше!       ||"<<endl;
	cout << "===================================================="<< endl;
	return 5;  
    }
	else{ 
	cout <<"|| Мы верим, вы можете лучше! Попробуйте еще раз! ||"<<endl;
	cout << "===================================================="<< endl;
	return 0;
	}

}
