#include<stdio.h>

int main() {
    int n,i;

    printf("Donnez la taille du tableau:");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les elements du tableau:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int max = tab [0];

    for(i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    printf("Le maximum est: %d\n", max);

    return 0;
}