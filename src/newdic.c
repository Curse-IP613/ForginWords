#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char dirname[30]="./dictionary/";
char r[5]=".txt";
char namefile[10];
char word[100];
printf("Enter file name\n");
scanf("%s", &namefile);
strncat(namefile, r, 4);
strncat(dirname, namefile, 10);
FILE *pf;
pf=fopen(dirname, "w+");

printf("Enter words (english.russian)\n");
while(1){
word[0]=" ";
scanf("%s", &word);
if(word[0]==" ") break;
fprintf(pf, "%s\n", word);
}
fclose(pf);

return 0;
}
