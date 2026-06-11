#include <stdio.h>
#include "contacts.h"

int main() {
    contact_t **contacts = malloc(sizeof(contact_t *) * 100);
    int choice = 1;

    while (1) {
        printf("\n\n\nMenu:\n");
        printf("0. Exit\n");
        printf("1. List contacts\n");
        printf("2. Add contact\n");
        printf("3. Remove contact\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                freefct(contacts);
                return 0;
            case 1:
                printf("Listing contacts...\n");
                // Code to list contacts
                break;
            case 2:
                printf("Adding contact...\n");
                // Code to add contact
                break;
            case 3:
                printf("Removing contact...\n");
                // Code to remove contact
                break;
        }
    }
}