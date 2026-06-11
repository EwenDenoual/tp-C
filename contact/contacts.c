#include <stdio.h>
#include "contacts.h"

contact_t *Addcontact(){
    char *name;
    char *phone_numbers;
    name = malloc(sizeof(char) * 100);
    phone_numbers = malloc(sizeof(char) * 100);
    contact_t *contact = malloc(sizeof(contact_t));
    printf("Quel est le nom du contact ? ");
    scanf("%s", name);
    printf("Quels est le numéro de téléphone du contact ? ");
    scanf("%s", phone_numbers);
    contact->name = name;
    contact->phone_numbers = phone_numbers;
    return contact;
}

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