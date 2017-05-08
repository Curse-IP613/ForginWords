#include <dirent.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    DIR *dir;
    struct dirent *ent;
    char directory[255] = "./dictionary/";
    dir = opendir(directory);
    while ((ent = readdir(dir)) != 0)
        cout << ent->d_name << endl;
    closedir(dir);
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
    FILE *pf;
    pf = fopen(dirname, "r");
    if (pf == NULL) {
        cout << "ERROR !!! \n";
        return -1;
    } else
        cout << "OKEY \n";
    cout << "Let's go: \n";

    while (1) {
        estr = fgets(str, sizeof(str), pf);

        if (estr == NULL) {
            if (feof(pf) != 0) {
                cout << "\n REad the END \n";
                break;
            } else {
                cout << "\n ERROR read file \n";
                break;
            }
        }

        point = strstr(str, ".") + 1;
        n = strcspn(str, point) - 1;
        cout << "   ENG: ";
        for (i = 0; i < n; i++)
            cout << str[i];
        cout << "\nЗнаете перевод?[Y/N]: ";
        cin >> otvet;

        if (otvet == 'Y' || otvet == 'y') {
            cout << "next: \n ";
        } else if (otvet == 'N' || otvet == 'n') {
            cout << "  RUS: " << point << endl;
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

    cout << "CLOSE FILE: \n";
    if (fclose(pf) == EOF)
        cout << "ERROR \n";
    else
        cout << "OKEY \n";

    return 0;
}

