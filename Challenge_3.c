#include<stdio.h>

int main() {
    int n,i;
    int tableau[100];
    int somme = 0;

    printf("Combien d'elements dans le tableau ? ");
    scanf("%d", &n);

    printf("Entrez les elements du tableau : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    for(i = 0; i < n; i++) {
        somme = somme + tableau[i];
    }

    printf("La somme totale est : %d\n", somme);

    return 0;
}