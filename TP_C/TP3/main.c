#include <stdio.h>
#include <stdlib.h>

char* copie(char * s1, char * s2){
 char * p1;
 p1 = s1;
 char * p2;
 p2 = s2;
 while(*p1 != '\0' || *p2 != '\0'){
    *p2 = *p1;
    p1++;
    p2++;


 }

    
}

int main(int argc, char const *argv[])
{
printf("saississez une taille de chaine de caractere : \n");
int t1;
scanf("%d",&t1);
printf("saisissez une chaine de caractere de cette taille");
getchar();
char* ch1;
ch1 = (char *) malloc(sizeof(char)*t1);
scanf("%c",&ch1);
//saisi d'une autre chaine de caractere
printf("saississez une taille de chaine de caractere : \n");
int t2;
scanf("%d",&t2);
ff
printf("saisissez une chaine de caractere de cette taille");
fflush(stdin);
char* ch2;
ch2 = (char *) malloc(sizeof(char)*t2);
scanf("%c",&ch2);
getchar();
copie(ch1,ch2);
printf(ch2);
}
