#include <stdio.h>
#include <stdlib.h>

void remplir(int *tab, int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        tab[i] = valeur;
    }
}

int main() {
    int *p = malloc(10 * sizeof(int));
    remplir(p, 10, 7);
    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}