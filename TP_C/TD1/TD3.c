#include <stdio.h>
void ex1(){
       int t[10];
    int j=1;
    int somme = 0;
    for (int i=0; i<10;i++){
        t[i]=j;
        printf("%d\n",t[i]);
        somme+=t[i];
        j++;
    }
    printf("somme = %d\n",somme);
    // Trouver un entier
    printf("Saisissez un entier \n");
    int saisie;
    int apparition=0;
    scanf("%d",&saisie);
    for(int k=0; k<10;k++){
        if(t[k] == saisie){
            apparition++;
            printf("index k = %d\n", k);
        }
    }
    printf("nombre d'apparition = %d\n", apparition);

    return 0;
}
void ex2(){
        int T[10];
    int saisie;
    int iteration = 0;
    do
    {
        printf("\n saisissez une valeur =");
        T[iteration] = scanf("%d",&saisie);
        iteration++;
    } while (saisie%2 == 0 && iteration <10);
    
}

int main(int argc, char const *argv[])
{
}

