#include <stdio.h>
#include <string.h>
#include "file.h"

void saveContactsToFile(AddressBook *addressBook) 
{
    FILE *fptr = fopen("contacts.txt", "w");
    if (fptr == NULL) {
        perror("Failed to open contacts.txt");
        return;
    }

    fprintf(fptr, "%d\n", addressBook->contactCount);
    for (int i = 0; i < addressBook->contactCount; i++) {
        fprintf(fptr, "%s\n", addressBook->contacts[i].name);
        fprintf(fptr, "%s\n", addressBook->contacts[i].phone);
        fprintf(fptr, "%s\n", addressBook->contacts[i].email);
    }

    fclose(fptr);
}

void loadContactsFromFile(AddressBook *addressBook) 
{
    FILE *fptr = fopen("contacts.txt", "r");
    if (fptr == NULL) {
        return; // No file exists yet
    }

    int count = 0;
    if (fscanf(fptr, "%d\n", &count) == 1) {
        if (count > MAX_CONTACTS) {
            count = MAX_CONTACTS;
        }

        for (int i = 0; i < count; i++) {
            if (fgets(addressBook->contacts[i].name, sizeof(addressBook->contacts[i].name), fptr) == NULL) {
                break;
            }
            addressBook->contacts[i].name[strcspn(addressBook->contacts[i].name, "\n")] = '\0';

            if (fgets(addressBook->contacts[i].phone, sizeof(addressBook->contacts[i].phone), fptr) == NULL) {
                break;
            }
            addressBook->contacts[i].phone[strcspn(addressBook->contacts[i].phone, "\n")] = '\0';

            if (fgets(addressBook->contacts[i].email, sizeof(addressBook->contacts[i].email), fptr) == NULL) {
                break;
            }
            addressBook->contacts[i].email[strcspn(addressBook->contacts[i].email, "\n")] = '\0';

            addressBook->contactCount++;
        }
    }

    fclose(fptr);
}