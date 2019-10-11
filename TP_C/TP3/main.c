#include <stdio.h>
#include <stdlib.h>

int copie(char * chaine){
    char * chaine_copie;
    chaine_copie = chaine;
    return chaine_copie;

}

int main(int argc, char const *argv[])
{
    // ex5 
    // déclaration de la chaine de caractere
    char * pc;
    scanf("%s",&pc);
    char * pc1;
    pc1 = copie(pc);
    return 0;
}
