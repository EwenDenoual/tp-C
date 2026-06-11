#ifndef CONTACTS_H
#define CONTACTS_H

typedef struct contact_s {
    char *name;
    char *phone_numbers;
} contact_t;

contact_t *Addcontact();
void Delstruct(contact_t *contact);
void Delcontact(contact_t **contact);
void freefct(contact_t **contacts);
#endif /* CONTACTS_H */