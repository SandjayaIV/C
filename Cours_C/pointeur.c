#include <stdio.h>
#include <stdlib.h>

int exemple1(){
    int x = 3;
    int *p;
    p = &x;
    printf("p contient la valeur %p qui n'est autre que l'adresse %p de X\n",p, &x);
    return 0;
    }

// Opération sur les pointeurs
int exemple2(){
    int x = 3;
    int* px = &x;
    
    printf("%p\n",px);
    printf("%p\n",&x);
    printf("%d\n",*px);
    printf("%d\n",++(*px));
    printf("%p\n",px+4);
    printf("%d\n",*px+4);
    printf("%d\n",*px++);
    
    return 0;

}

// exemple 3
void show_sans_pointeur(int x, int y){
    x++;
    y++;
}
void show (int *x, int *y){
    (*x)++;
    (*y)++;

}
int exemple3(){
    int a = 3, b = 5;
    show_sans_pointeur(a,b);
    printf("valeur1: %d,\n Valeur2: %d\n", a,b);
    show_sans_pointeur(a,b); // passage par reference donc ce sont des copies de a et b qui sont incremente
    printf("valeur1: %d,\n Valeur2: %d\n", a,b);
    show(&a,&b); // passage par valeur donc ce sont les valeurs de a et b qui sont incrementes
    printf("valeur1: %d,\n Valeur2: %d\n", a,b);
    return 0;
}

int td_ex1(){
    int *x;
    x = (int *) malloc(sizeof(int));
    *x = 5;
    printf("%x\n",*x);
    free(x);
 
    int *tab;
    tab = (int *) malloc(10*sizeof(int));
    for (int i = 0; i<10;i++){
        printf("saissir un entier :\n");
        scanf("%d",tab+i);
    }
    for (int i = 0; i<10;i++){
        printf("%d",*(tab+i));
    }
free(tab);
return 0;
}


void swap(int *x,int *y){
    printf("x = %d, y = %d",*x, *y);
    int a = *x;
    *x = *y;
    *y = a;
    printf("\nx = %d, y = %d\n", *x,*y);
}

void reverse(char *std){
    char *endstd = std;
    while(*endstd != '\0'){
        endstd++;
    }
    char *tmp = (char *) malloc(sizeof(char));
    if (tmp == NULL){
        exit(0);
    }
    while(std < endstd){
        endstd--;
        *tmp = *std;
        *std = *endstd;
        *endstd = *tmp;
        std++;
    }
    free(endstd);

}

int main(){
char *tab = "bonjour";
reverse(tab);


}
/* void fonc(){
    char* std = (char*) malloc(sizeof(50));
if(std == NULL){
    return 1;
}
    printf("Entrer une chaine de caractere");
    scanf("%s",std);
    reverse(std);
    printf("reverse = %s\n",std);
    return 0;
}
}*/