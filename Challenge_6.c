#include <stdio.h>

int main() {
    int n, i, facteur;

    printf("Donnez la taille du tableau: ");
    scanf("%d", &n);

    int tab[n];     
    int result[n];  

    printf("Entrez les elements du tableau:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Donnez le facteur de multiplication: ");
    scanf("%d", &facteur);

    for(i = 0; i < n; i++) {
        result[i] = tab[i] * facteur;
    }

    printf("Tableau resultant: ");
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
