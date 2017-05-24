

/*int switchfunc(x){
Number = x;
    switch (Number) {
    case 1:
{
	system ("clear");
	ChoiceDict();
	getchar();
        return 1;
        break;
}
    case 2:
{
	system ("clear");
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
}
*/
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
    char directory[255] = "./dictionary/";
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
        cout << "\nCant find this file : " << file_name;
	getchar();
	return 0;
	}
	else return 1;
}

int ChoiceDict()
{
    dirlist();
    cout << "Enter name of dictionary:";
    char fileopen[20];
    char dirname[30] = "./dictionary/";
    char *estr;
    char str[50];
    char *point;
    int n, i;
    char otvet;
    int numotvet;
    cin >> fileopen;

    strncat(dirname, fileopen, 20);
    if(FileValidation(dirname)==0){
	cout<<endl<<"func retorn 0"<<endl;
	return 0;
	}
    FILE *pf;
    pf = fopen(dirname, "r");
    if (pf == NULL) {
        cout << " ERROR !!! \n";
        return -1;
    } else
        cout << "OKEY \n";
    cout << "Let's go: \n";

    while (1) {
        estr = fgets(str, sizeof(str), pf);

        if (estr == NULL) {
            if (feof(pf) != 0) {
                cout << "\n Read is END \n";
                break;
            } else {
                cout << "\n ERROR read file \n";
                break;
            }
        }

        point = strstr(str, ".") + 1;
        n = strcspn(str, point) - 1;
        for (i = 0; i < n; i++)
            cout << str[i];
        cout << "\n Are you know translate?[Y/N]: ";
        cin >> otvet;

        if (otvet == 'Y' || otvet == 'y') {
            cout << "next: \n ";
        } else if (otvet == 'N' || otvet == 'n') {
            cout << point << endl;
        } else
            do {
                cout << "Enter correct answer!\n";
                numotvet = 0;
                cin >> otvet;
                if (otvet == 'Y' || otvet == 'y') {
                    numotvet = 1;
                    cout << "next: \n ";
                } else if (otvet == 'N' || otvet == 'n') {
                    numotvet = 1;
                    cout << "  RUS: " << point << endl;
                }
            } while (numotvet != 1);
    }
    getchar();
    cout << "CLOSE FILE: \n";
    if (fclose(pf) == EOF)
        cout << "ERROR \n";
    else
        cout << "OKEY \n";

    return 0;
}


