#include <stdio.h>
struct Client
{
    char nom[50];
    char prenom[50];
    int code_postal;
    char ville[50];
     };


int main(int argc, char const *argv[])
{
  
    struct Client cl1 = {"vallet","stan",92600,"asnieres"};
    printf("%s\n", cl1.nom);
    printf("Saisissez un nom\n");
    struct Client cl2;
    scanf("%s",&cl2.nom);
    printf("%s",cl2.nom);
    return 0;
}
