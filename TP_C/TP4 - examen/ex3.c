#include <stdlib.h>
#include <stdio.h>

int nbOcc(int *T, int n, int x){
    int compteur  = 0;
    for(int i = 0;i<n ;i++){
        if(*(T+i)==x){
            compteur++;
        }
    }
    return compteur;
}

float avg(int *T, int n){
    float somme = 0;
    for(int i = 0; i<n;i++){
        somme += *(T+i);
    }
    float moyenne = somme/n;
    return moyenne;
}

/*
void decal(int *T, int n){
    //decalage d'un rang
    for(int i=0;i<n;i++){
        sauvegarde
        old_value = *(T+i+1);
        new_value = *(T+i);
        *(T+i+1) = new_value;
        sauvegarde = old_value
        }
    
}
*/





int main(int argc, char const *argv[]){
       int longueur = 0;
    do{
    if(longueur > 10){
        printf("valeur saisie trop haute\n");
    }
    printf("saisir un longueur de tableau inférieur à 10\n");
    scanf("%d",&longueur);
    getchar();
    
    }while(longueur > 10);
    int *tab;
    tab = (int *) malloc(longueur*sizeof(int));
    for (int i = 0; i<longueur;i++){
        printf("saissir un entier :\n");
        scanf("%d",tab+i);
    }
    printf("saisissez un valeur à verifier\n");
    int x;
    scanf("%d",&x);
    printf("nombre d'occurence = %d\n",nbOcc(tab,longueur,x));
    printf("moyenne %f \n",avg(tab,longueur));

    
    return 0;
}
