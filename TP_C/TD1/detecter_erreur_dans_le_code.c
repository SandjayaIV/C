#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[26];
    int s1=0;
    printf("saisissez une phrase \n");
    fgets(a,26,stdin);
    s1=strlen(a);
    printf("la taille de la chaine est de %d",s1);
    return 0;
// erreur : fgets prend en compte le  \n
}
