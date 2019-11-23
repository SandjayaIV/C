#include <stdio.h>

int suite_arithmetique(int N){
    int Un =0;
    int Uo = 5;
    int r = 2;
    Un += Uo+N*r;
    return Un;
}

int main(int argc, char const *argv[])
{
    int N = 0;
    printf("saissiez N\n");
    scanf("%d",&N);
    int resultat = suite_arithmetique(N);
    printf("resultat = %d \n", resultat);
    

}

