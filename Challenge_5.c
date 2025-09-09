#include<stdio.h>

int main() {
    int n,i;
    printf("Combien d elements dans le tableau ? ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    int min = tab[0];
    for(i = 1; i < n; i++) {
        if(tab[i] < min) {
            min = tab[i];
        }
    }
    printf("Le plus petit element est : %d\n", min);

    return 0;
}