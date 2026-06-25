#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
#include "file.h"

/*static void readLine(char *buffer, size_t size) {
    if (fgets(buffer, size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }
    buffer[strcspn(buffer, "\n")] = '\0';
}*/

// Validation functions
int validateName(const char *name) {
    // Check if the name is not empty and contains only letters and spaces
    if (strlen(name) == 0) {
        return 0; // Invalid: Empty name
    }
    for (size_t i = 0; i < strlen(name); i++) {
        if (!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || name[i] == ' ')) {
            return 0; // Invalid: Contains non-alphabetic characters
        }
    }
    return 1; // Valid name
}

// Validate phone number (basic validation for 10 digits)
int validatePhoneNumber(const char *phoneNumber) {
    if (strlen(phoneNumber) != 10) {
        return 0; // Invalid: Phone number must be exactly 10 digits
    }
    for (size_t i = 0; i < strlen(phoneNumber); i++) {
        if (phoneNumber[i] < '0' || phoneNumber[i] > '9') {
            return 0; // Invalid: Contains non-digit characters
        }
    }
    return 1; // Valid phone number
}

// Validate email (basic validation)
int validateEmail(const char *email) {
    int atCount = 0;
    int dotCount = 0;
    for (size_t i = 0; i < strlen(email); i++) {
        if (email[i] == '@') {
            atCount++;
        }
        if (email[i] == '.') {
            dotCount++;
        }
    }
    if (atCount != 1 || dotCount < 1) {
        return 0; // Invalid: Missing or invalid '@' / '.' count
    }

    return 1; // Valid email
}





/// Function prototypes
void listContacts(AddressBook *addressBook) 
{
    // Sort contacts based on the chosen criteria
    printf("List of contacts:\n");
    for(int i = 0; i < addressBook->contactCount; i++) {
        printf("Name: %s, Phone: %s, Email: %s\n", 
               addressBook->contacts[i].name, 
               addressBook->contacts[i].phone, 
               addressBook->contacts[i].email);
    }
}


void initialize(AddressBook *addressBook) {
    
    // Load contacts from file during initialization (After files)
    //loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) {
    saveContactsToFile(addressBook); // Save contacts to file
    exit(EXIT_SUCCESS); // Exit the program
}


void createContact(AddressBook *addressBook)
{   // creating the contact 
    if (addressBook->contactCount >= MAX_CONTACTS) {
        printf("Address book is full. Cannot add more contacts.\n");
        return;
    }

    char temp[50];
    printf("Enter contact details:\n");
    printf("Name: ");
    //readLine(temp, sizeof(temp));
    scanf("%[^\n]",temp);

    if (!validateName(temp)) {
        printf("Invalid name. Please try again.\n");
        return;
    }

    char tempphone[20];
    printf("Phone Number: ");
    scanf("%19s", tempphone);
    getchar(); // Consume the newline character
    if (!validatePhoneNumber(tempphone)) {
        printf("Invalid phone number. Please try again.\n");
        return;
    }

    char tempmail[50];
    printf("Email: ");
    scanf("%49s", tempmail);
    if (!validateEmail(tempmail)) {
        printf("Invalid email. Please try again.\n");
        return;
    }

    int index = addressBook->contactCount;
    strcpy(addressBook->contacts[index].name, temp);
    strcpy(addressBook->contacts[index].phone, tempphone);
    strcpy(addressBook->contacts[index].email, tempmail);
    addressBook->contactCount++;
}

void searchContact(AddressBook *addressBook)
{
    char search[50];
    int n;
    printf("Choose search : \n1. Search by Name\n2. Search by Phone number\n3. Search by Email\n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    getchar(); // consume newline left by scanf

    switch (n) {
        case 1: {
            printf("Enter name to search: ");
            if (fgets(search, sizeof(search), stdin) == NULL) {
                printf("Input error.\n");
                return;
            }
            search[strcspn(search, "\n")] = '\0';

            for (int i = 0; i < addressBook->contactCount; i++) {
                if (strcmp(addressBook->contacts[i].name, search) == 0) {
                    printf("Contact found: Name : %s, Phone: %s, Email: %s\n",
                           addressBook->contacts[i].name,
                           addressBook->contacts[i].phone,
                           addressBook->contacts[i].email);
                    return;
                }
            }
            printf("Contact not found.\n");
            break;
        }
        case 2: {
            printf("Enter phone number to search: ");
            if (fgets(search, sizeof(search), stdin) == NULL) {
                printf("Input error.\n");
                return;
            }
            search[strcspn(search, "\n")] = '\0';

            for (int i = 0; i < addressBook->contactCount; i++) {
                if (strcmp(addressBook->contacts[i].phone, search) == 0) {
                    printf("Contact found: Name : %s, Phone: %s, Email: %s\n",
                           addressBook->contacts[i].name,
                           addressBook->contacts[i].phone,
                           addressBook->contacts[i].email);
                    return;
                }
            }
            printf("Contact not found.\n");
            break;
        }
        case 3: {
            printf("Enter email to search: ");
            if (fgets(search, sizeof(search), stdin) == NULL) {
                printf("Input error.\n");
                return;
            }
            search[strcspn(search, "\n")] = '\0';

            for (int i = 0; i < addressBook->contactCount; i++) {
                if (strcmp(addressBook->contacts[i].email, search) == 0) {
                    printf("Contact found: Name : %s, Phone: %s, Email: %s\n",
                           addressBook->contacts[i].name,
                           addressBook->contacts[i].phone,
                           addressBook->contacts[i].email);
                    return;
                }
            }
            printf("Contact not found.\n");
            break;
        }
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
}

void editContact(AddressBook *addressBook)
{
	/* Define the logic for editcontact */
    char temp[50];
    int option;
    printf("Choose the option to edit contact:\n1. Edit by Nmae\n2. Edit by Phone number\n3. Edit by Email\n");
    scanf("%d",&option);
    getchar(); // consume newline left by scanf
    switch(option)
    {
        case 1:
        {
           printf("Enter the name to edit :");
           scanf("%[^\n]",temp); 
           for(int i=0 ;i<addressBook->contactCount;i++)
           {
                if(strcmp(temp,addressBook->contacts[i].name) ==0)
                { 
                    char newname[50];
                    printf("Enter the new name :");
                    scanf("%[^\n]",newname);
                    if(!validateName(newname))
                    {
                        printf("Invalid name. Please try again.\n");
                        return;
                    }
                    strcpy(addressBook->contacts[i].name,newname);
                    printf("Contact updated successfully.\n");
                    return;
                }
           }
              break;
        }
        case 2:
        {
              printf("Enter the phone number to edit :");
              scanf("%s",temp);
                getchar(); // consume newline left by scanf
                for(int i =0; i<addressBook->contactCount;i++)
                {
                    if(strcmp(temp,addressBook->contacts[i].phone)==0)
                    {
                        char newphone[10];
                        printf("Enter the new phone number :");
                        scanf("%s",newphone);
                        if(!validatePhoneNumber(newphone))
                        {
                            printf("Invalid phone number. Please try again.\n");
                            return;
                        }
                        strcpy(addressBook->contacts[i].phone,newphone);
                        printf("Contact updated successfully.\n");
                        return;
                    }
                }
                break;

        }
        case 3:
        {
            printf("Enter the email to edit :");
            scanf("%s",temp);
            for(int i=0;i<addressBook->contactCount;i++)
            {
                if(strcmp(temp,addressBook->contacts[i].email)==0)
                {
                    char newemail[50];
                    printf("Enter the new email :");
                    scanf("%s",newemail);
                    if(!validateEmail(newemail))
                    {
                        printf("Invalid email. Please try again.\n");
                        return;
                    }
                    strcpy(addressBook->contacts[i].email,newemail);
                    printf("Contact updated successfully.\n");
                    return;
                }
            }
            break;
        }
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        
    }
}

void deleteContact(AddressBook *addressBook)
{
	/* Define the logic for deletecontact */
   int option;
   printf("Choose the option to delete contact: \n1. DSelete by Name\n2. Dlete by Phone number\n3. Delete by Email\n");
   scanf("%d",&option);
    getchar(); // consume newline left by scanf
    switch(option)
    {
        case 1:
        {
            char temp[50];
            printf("Enter the Name to delete :");
            scanf("%[^\n]",temp);
            for(int i=0;i<addressBook->contactCount;i++)
            {
                if(strcmp(temp,addressBook->contacts[i].name)==0)
                {
                    char com;
                    printf("C");
                   for(int j=i;j<addressBook->contactCount-1;j++)
                   {
                        addressBook->contacts[i] = addressBook->contacts[i+1];
                   }
                     addressBook->contactCount--;
                    printf("Contact deleted successfully.\n");
                    return;
                }
                printf("Contact not found.\n");
                return;
            }
            break;

        }

        case 2:
        {
            char temp[10];
            printf("Enter the phone number to delete :");
            scanf("%s",temp);
            getchar(); // consume newline left by scanf
            for(int i =0;i<addressBook->contactCount;i++)
            {
                if(strcmp(temp,addressBook->contacts[i].phone)==0)
                {
                    for(int j=i;j<addressBook->contactCount-1;j++)
                    {
                        addressBook->contacts[i] = addressBook->contacts[i+1];

                    }
                    addressBook->contactCount--;
                    printf("Contact deleted successfully.\n");
                    return;
                }
                printf("Contact not found.\n");
                return;
            }
            break;
        }
        
        case 3:
        {
            char temp[50];
            printf("Enter the email to delete :");
            scanf("%s",temp);
            for(int i=0;i<addressBook->contactCount;i++)
            {
                if(strcmp(temp,addressBook->contacts[i].email)==0)
                {
                    for(int j=i;j<addressBook->contactCount-1;j++)
                    {
                        addressBook->contacts[i] = addressBook->contacts[i+1];
                    }
                    addressBook->contactCount--;
                    printf("Contact deleted successfully.\n");
                    return;
                }
                printf("Contact not found.\n");
                return;
           }
                break;

    }
}
}



