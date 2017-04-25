#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number = 0;
    char dirname[30] = "./dictionary/";
    char r[5] = ".txt";
    char namefile[10];
    char word[100];
    printf("Enter file name\n");
    scanf("%s", &namefile);
    strncat(namefile, r, 4);
    strncat(dirname, namefile, 10);
    FILE *pf;
    pf = fopen(dirname, "w+");
    printf("Enter the number of words you want to enter\n");
    scanf("%i", &number);
    printf("Enter words (english.russian)\n");
    for (int i = 0; i < number; i++) {
        scanf("%s", &word);
        fprintf(pf, "%s\n", word);
    }
    fclose(pf);
    printf("Dictionary %s created\n", namefile);
    return 0;
}

