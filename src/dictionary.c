#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
DIR *dir;
struct dirent *ent;
char directory[255] = "./dictionary/";
dir = opendir(directory);
while ((ent=readdir(dir)) != 0) 
printf("%s\n", ent->d_name);
closedir(dir);
printf("Enter name of dictionary:");
char fileopen[20];
char dirname[30]="./dictionary/";
char *estr;
char str[50];
char *point;
int n,i;
scanf("%s",&fileopen);
strncat(dirname, fileopen, 20);
FILE *pf;
pf=fopen(dirname,"r");
   if (pf == NULL) {printf ("ERROR !!! \n"); return -1;}
   else printf ("OKEY \n");
 printf ("Let's go: \n");

   //Чтение (построчно) данных из файла в бесконечном цикле
   while (1)
   {
      // Чтение одной строки  из файла
      estr = fgets (str,sizeof(str),pf);

      //Проверка на конец файла или ошибку чтения
      if (estr == NULL)
      {
         // Проверяем, что именно произошло: кончился файл
         // или это ошибка чтения
         if ( feof (pf) != 0)
         {  
            //Если файл закончился, выводим сообщение о завершении 
            //чтения и выходим из бесконечного цикла
            printf ("\n REad the END \n");
            break;
         }
         else
         {
            //Если при чтении произошла ошибка, выводим сообщение 
            //об ошибке и выходим из бесконечного цикла
            printf ("\n ERROR read file \n");
            break;
         }
      }
      //Если файл не закончился, и не было ошибки чтения 
      //выводим считанную строку  на экран

point=strstr(str,".")+1;
n=strcspn(str,point)-1;
printf("   ENG: ");
for(i=0;i<n;i++)
printf("%c",str[i]);
	printf ("  RUS: %s \n",point);
   }

   // Закрываем файл
   printf ("CLOSE FILE: \n");
   if ( fclose (pf) == EOF) printf ("EROR \n");
   else printf ("OKEY \n");


return 0;
}







