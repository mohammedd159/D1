#include <string.h>

#define MAX_CONTACTS 100


struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};


struct Contact contacts[MAX_CONTACTS];
int nombreContacts = 0;


void ajouterContact() {
    if (nombreContacts >= MAX_CONTACTS) {
        printf("Le carnet de contacts est plein !\n");
        return;
    }
   
    printf("Entrez le nom : ");
    scanf("%s", contacts[nombreContacts].nom);
    printf("Entrez le numéro de téléphone : ");
    scanf("%s", contacts[nombreContacts].telephone);
    printf("Entrez l'adresse e-mail : ");
    scanf("%s", contacts[nombreContacts].email);
   
    nombreContacts++;
    printf("Contact ajouté avec succès !\n");
}


void afficherContacts() {
    if (nombreContacts == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }
   
    for (int i = 0; i < nombreContacts; i++) {
        printf("Contact %d :\n", i + 1);
        printf("Nom : %s\n", contacts[i].nom);
        printf("Téléphone : %s\n", contacts[i].telephone);
        printf("E-mail : %s\n", contacts[i].email);
        printf("------------------------\n");
    }
}


void rechercherContact() {
    char nom[50];
    printf("Entrez le nom du contact à rechercher : ");
    scanf("%s", nom);
   
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Contact trouvé :\n");
            printf("Nom : %s\n", contacts[i].nom);
            printf("Téléphone : %s\n", contacts[i].telephone);
            printf("E-mail : %s\n", contacts[i].email);
            return;
        }
    }
   
    printf("Contact non trouvé.\n");
}


void modifierContact() {
    char nom[50];
    printf("Entrez le nom du contact à modifier : ");
    scanf("%s", nom);
   
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Entrez le nouveau numéro de téléphone : ");
            scanf("%s", contacts[i].telephone);
            printf("Entrez la nouvelle adresse e-mail : ");
            scanf("%s", contacts[i].email);
            printf("Contact modifié avec succès !\n");
            return;
        }
    }
   
    printf("Contact non trouvé.\n");
}


void supprimerContact() {
    char nom[50];
    printf("Entrez le nom du contact à supprimer : ");
    scanf("%s", nom);
   
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            
            for (int j = i; j < nombreContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            nombreContacts--;
            printf("Contact supprimé avec succès !\n");
            return;
        }
    }
   
    printf("Contact non trouvé.\n");
}

int main() {
    int choix;
   
    do {
        
        printf("\n--- Système de Gestion de Contacts ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("0. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);
       
        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                afficherContacts();
                break;
            case 3:
                rechercherContact();
                break;
            case 4:
                modifierContact();
                break;
            case 5:
                supprimerContact();
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide, veuillez réessayer.\n");
        }
    } while (choix != 0);
   
    return 0;
}