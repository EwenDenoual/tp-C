#include <stdio.h>
#include <stdlib.h>

int dynamique() {
    int size = 2;
    int *p = calloc(size, sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    int n = -1;
    printf("Current size: %d\n", size);
    while (n != 0) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        if (n != 0) {
            size += n;
            int *temp = realloc(p, size * sizeof(int));
            if (temp == NULL) {
                fprintf(stderr, "Memory reallocation failed\n");
                free(p);
                return 1;
            }
            p = temp;
        }
        printf("Current size: %d\n", size);
    }
    free(p);
    return 0;
}

int main() {
    return dynamique();
}