#include <dirent.h>
#include <stdio.h>

int ListDic (void) {
DIR *dir;
struct dirent *ent;

char directory[255] = "./dictionary/";
dir = opendir(directory);

while ((ent=readdir(dir)) != 0) 
printf("%s\n", ent->d_name);

closedir(dir);
return 0;
}




