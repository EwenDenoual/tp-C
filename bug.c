Extrait A :
char* copier(const char* src) {
    char* dst = malloc(strlen(src));
    strcpy(dst, src);
    return dst;
}

copier alloue une mémoire de taille strlen(src) alors que strcpy va copier strlen(src) + 1 caractères 

char* copier(const char* src) {
    char* dst = malloc(strlen(src) + 1);
    strcpy(dst, src);
    return dst;
}

Extrait B :
int bug2() {
    int* a = malloc(sizeof(int));
    int* b = a;
    free(a);
    free(b);
    return 0;
}

a et b associé au meme bloc de mémoire, donc le double free est une erreur.

int bug2corrigé() {
    int* a = malloc(sizeof(int));
    int* b = a;
    free(a); //ou free(b) mais pas les 2
    return 0;
}

Extrait C :
int bug3() {
    int *tab = malloc(3 * sizeof(int));
    tab[0] = 1; tab[1] = 2; tab[2] = 3;
    free(tab);
    tab[0] = 0;
    return 0;
}

tab est free puis utilisé après, le free ne peut se faire que après le dernier utilisation de tab

int bug3() {
    int *tab = malloc(3 * sizeof(int));
    tab[0] = 1; tab[1] = 2; tab[2] = 3;
    tab[0] = 0;
    free(tab);
    return 0;
}