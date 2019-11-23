#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void afficheChaine(char character[]){
    int i =0;
    while(character[i]){
        putchar(character[i]);
        i++;
    }
}

int longueur(char s[]){
    int longueur = 0;
    while(s[longueur] != '\n'){
        longueur++;
    }
    return longueur;
}

char extrait(char s[], int n){
char character = s[n-1];
return character;
}
void subs(char s[], int n, char a){
    s[n] = a;

}



int main(int argc, char const *argv[])
{   
    char chaine[25];
    printf("saississez une chaine de caractere\n");
    fgets(chaine,25,stdin);
    afficheChaine(chaine);
    // longueur de chaine
    printf("\n"); // plus de visibilite sur le terminal
    int longueur_de_chaine;
    longueur_de_chaine = longueur(chaine);
    printf("la longueur de la chaine est de %d \n",longueur_de_chaine);

    // extrait d'un chaine
    // n i eme caractere
    printf("\n"); // plus de visibilite sur le terminal

    printf("rentre le rang du caractere a extraire : ");
    int rang;
    scanf("%d", &rang);
    char caractere = extrait(chaine,rang);
    printf("le caractere est: %c",caractere);
    fflush(stdin);
    printf("\n"); // plus de visibilite sur le terminal

    printf("rentre le caractere qui va le remplacer: ");
    
    //getchar();
    char c;
    scanf("%c",&c);
    printf("\n le car est: %c\n",c);
    subs(chaine, rang, c);

    printf("%s",chaine);

    return 0;
}
