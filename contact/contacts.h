#ifndef CONTACTS_H
#define CONTACTS_H

typedef struct contact_s {
    char *name;
    char *phone_numbers;
} contact_t;

contact_t *Addcontact();
#endif /* CONTACTS_H */