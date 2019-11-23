#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int ex1(){
    printf("%d\n%1d\n%4d\n", 17, 17, 17);
    printf("%04d %016f %12s\n", 17, 3.141593, "string");
    printf("%5.3f\n%11.6f\n", 3.1415, 3.1415);
    printf("%5.0f", 314.0);
    printf(" à droite :\t %6d \n à gauche :\t*%-6d*\n", 314, 314);

return 0;
}
int ex2_conversion(){
    int recommencer=0;
    do{
    printf("Selectionner une devise (1 pour euros, 0 pour dollars\n");
    int C_euros_dollars;
    scanf("%d", &C_euros_dollars);
    double converti;
    printf("saisissez un montant\n");
    int montant;
    scanf("%d",&montant);
    if(C_euros_dollars){
        converti = montant * 1.10;
        printf("voila la conversion en dollars\n");

    }
    else{
        converti = montant / 1.10;
        printf("voila la conversion en euros\n");        

    }
    printf("%f", converti);
    printf("\n voulez vous recommencer (1 oui 0 non)?");
    
    scanf("%d", &recommencer);   
    }while(recommencer == 1);
    
    return 0;
}

int ex3_tableau(){
    int A[10];
    int B[5];
    for(int i = 0;i<5;i++){
        printf("Saisissez une valeur pour A \n");
        scanf("%d",&A[i]);
    }
    for(int i = 0;i<5;i++){
        printf("Saisissez une valeur pour B \n");
        scanf("%d",&B[i]);
    }
    for(int i = 0; i<5;i++){
        A[i+5] = B[i];
    }
    printf("Tableau A \n");
    for(int i = 0; i < 10; i++){

        printf("%d\n",A[i]);
    }
    return 0;

}
int exo4_exo5_dimensions(){
    
    int tab1[4][4];
    int tab2[4][4];
    srand(time(NULL));
    int somme = 0;
    
    for(int i =0; i<4;i++){
        for(int j = 0; j<4;j++){
            tab1[i][j] = (rand()%100);
        }
    }
    
    for(int i =0; i<4;i++){
        for(int j = 0; j<4;j++){
            printf("%d;",tab1[i][j]);
            somme += tab1[i][j];
        }
        printf("\n");
    }
int moyenne = somme/(4*4);
printf("voila la somme du tableau = %d \n",somme);
printf("voila la moyenne du tableau = %d \n",moyenne);

return 0;


}

int ex6_caratere(){
char chaine[50];
printf("Saisissez une chaine de caractere\n");
fgets(chaine,50,stdin);
puts(chaine);
int longueur1 = strlen(chaine);
printf("\n la longueur de la chaine est de %d\n",longueur1);
printf("quel index souhaitez-vous retirer ?");
int index;
scanf("%d", &index);
for(int i = index; i<50; i++){
    chaine[i] = chaine[i+1];
}
puts(chaine);

int longueur = strlen(chaine);
printf("la longueur de la chaine est de %d\n",longueur);
return 0;

}
int ex7_crypto(){
char chaine[50];
printf("Saisissez une chaine de caractere\n");
fgets(chaine,50,stdin);
puts(chaine);
for(int i=0;i<50;i++){
    if(chaine[i] == 0){
        
    }
    chaine[i]+=1;
}
puts(chaine);


}



int main(int argc, char const *argv[])
{
ex7_crypto();
return 0;
}
