#include <stdio.h>
#include <stdlib.h> 
// #include <string.h>
/*
int ex1(){
    printf("Saisir une chaine de caractere \n");
    char chaine[30];
    fgets(chaine,30,stdin);

    printf("Saisir le caractere a verifier \n");
    char caractere;
    scanf("%c",&caractere);
    int compteur = 0;


    for(int i = 0;i < strlen(chaine);i++){
        if(chaine[i] == caractere){
            compteur++;
        }
        else{
            continue;
        }

    }
    printf("le caractere %c existe %d fois dans la chaine\n",caractere,compteur);
    printf("Saisir le caractere remplacant \n");
    getchar();
    char remplacant;
    scanf("%c",&remplacant);
    char chaine_copy[30];
    strcpy(chaine_copy,chaine);

    for(int i = 0;i < strlen(chaine_copy);i++){
        if(chaine_copy[i] == caractere){
            chaine_copy[i] = remplacant;
        }
        else{
            continue;
        }

    }
    printf("La chaine devient %s\n",chaine_copy);
    getchar();
    printf("Voulez vous rétablir la chaine orgininal (o/n) \n");
    char saisie_utilisateur;
    scanf("%c",&saisie_utilisateur);
    if(saisie_utilisateur == 'o'){
        printf("la chaine originale était : %s\n",chaine);
        
    }
    else
    {
        
    }
    
    
}
*/
void strcate(char * s1, char * s2){
    char *concat = (char *) malloc(20*sizeof(char));
    for(int i = 0; i<10;i++){
        *(concat+i) = *(s1+i);
    }
    for(int i = 10; i<20;i++){
        *(concat+i) = *(s2+i-10);
    }
    return concat;
}


int main(int argc, char const *argv[])
{
    //ex1();

    printf("saisir une chaine de caractere \n");
    char *pc1 = (char *) malloc(10*sizeof(char));
    scanf("%s",pc1);
    while(*pc1 == '\0'){
        getchar();
    }
    printf("saisir une chaine de caractere \n");
    char *pc2 = (char *) malloc(10*sizeof(char));
    scanf("%s",pc2);
    strcate(pc1,pc2);

    return 0;
}
