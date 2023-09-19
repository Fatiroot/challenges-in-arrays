#include <stdio.h>
#include<string.h>
int main() {
    char nom[50];
    int l;
    printf("saisir votr nom:\n",nom[50]);
  fgets(nom, sizeof(nom), stdin);

    l = strlen(nom);
   printf("Votre nom est : %s\n", nom);
    printf("Le nombre de caractères dans votre nom est : %d\n", l);

    return 0;
}
