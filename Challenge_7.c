#include <stdio.h>

int main() {
    int n, i, j, temp;

    // demander la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];  // déclaration du tableau

    // saisir les éléments du tableau
    printf("Entrez les elements du tableau : \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // echanger les deux elements
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // afficher le tableau trié
    printf("Tableau trie en ordre croissant : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
