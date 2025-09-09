#include <stdio.h>

int main()

 {
    int n,i;
    
    printf("Entrez le nombre d'elements du tableau:");
    scanf("%d", &n);

    int tab[n];


    for ( i = 0 ; i < n ; i++) {
    printf("Entrez l'element %d: ",i+1);
    scanf("%d", &tab[i]);
    }

    printf("Les elements du tableau sont: ");
    for(i = 0; i < n ; i++) {
        printf("%d", tab[i]);
    }

    printf("\n");
    return 0;
 }