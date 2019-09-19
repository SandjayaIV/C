#include <stdio.h>


int main(){
    int i=0,j;
    j=i++;
    printf("i = %d, j=%d\n",i,j);
    j=++i;
    printf("i = %d, j=%d",i,j);

}