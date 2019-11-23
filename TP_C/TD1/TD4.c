#include <stdio.h>
#include <string.h>

void ex1(){
    // methode 1
    char chaine1[]="Je n'aime pas le chocolat";
    printf("%s et sa longueur %d\n",chaine1,strlen(chaine1));

}
void ex2(){
    // methode 2
    printf("saisissez une chaine de caractere = \n");
    char chaine2[26];
    fgets(chaine2,26,stdin);
    puts(chaine2);
    int iteration2 = 0;
    int longueur2 = 0;
    while(chaine2[iteration2]!='\n'){
        longueur2++;
        iteration2++;
}
void ex3(){
    // calcul longueur chaine de caractere
    printf("saisissez une chaine de caractere = \0");
    char chaine3[10];
    fgets(chaine3,10,stdin);
    int iteration3 = 0;
    int longueur3 = 0;
    while(chaine3[iteration3]!='\n'){
        longueur3++;
        iteration3++;

    }
    printf("la longueur de la chaine est de : %d lettres\n",longueur3);

}
void ex4(){
    // besoin des 2 fonctions precedentes
    ex2();
    ex3();

    // determiner la chaine de caractere la plus longue
    if (longueur2>longueur3){
        printf("chaine 2 est plus grande que chaine 3");
    }
    else{
        printf("chaine 3 est plus grande que chaine 2");
    }

}
void ex5(){
    char chaine1[20];
    char chaine2[20];
    printf("saisissez une chaine de caractere");
    fgets(chaine1,20,stdin);
    strcpy(chaine2,chaine1,stdin);
}



int main(int argc, char const *argv[])
{
// copier une chaine de caractere saisie par l'utilisateur


    
    


    
    return 0;
}

