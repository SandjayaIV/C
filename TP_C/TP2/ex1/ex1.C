#include <stdio.h>

int estTrie(int T[],int n){
    int croissant = 1;
    for(int i = 0; i<n-1; i++){
        if(T[i]>T[i+1]){
        croissant = 0;
        }
        else{
            continue;
        }
    }
    return croissant;
    
}

int main(int argc, char const *argv[])
{   
    int tab[5];
    printf("saississez un tableau de 5 valeurs\n");
    for(int i = 0; i<5; i++){
        scanf("%d",&tab[i]);
    }
    int croissant = estTrie(tab,5);
    printf("croissant = %d\n",croissant);

}
