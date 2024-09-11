#include <stdio.h>
#include <string.h>

#define MAX_ETUDIANTS 100

typedef struct {
    int id;
    char prenom[50];
    char nom[50];
    char dateNaissance[12];
    char departement[30];
    float moyenne;
} Etudiant;

Etudiant etudiants[MAX_ETUDIANTS];
int nombreEtudiants = 0;

void ajouterEtudiant() {
    if (nombreEtudiants < MAX_ETUDIANTS) {
        Etudiant e;
        printf("Entrez l'identifiant unique : ");
        scanf("%d", &e.id);
        printf("Entrez le prénom : ");
        scanf("%s", e.prenom);
        printf("Entrez le nom : ");
        scanf("%s", e.nom);
        printf("Entrez la date de naissance (jour/mois/année) : ");
        scanf("%s", e.dateNaissance);
        printf("Entrez le département : ");
        scanf("%s", e.departement);
        printf("Entrez la moyenne générale : ");
        scanf("%f", &e.moyenne);
        
        etudiants[nombreEtudiants] = e;
        nombreEtudiants++;
        printf("L'étudiant a été ajouté avec succès.\n");
    } else {
        printf("Impossible d'ajouter plus d'étudiants, le nombre maximum est atteint.\n");
    }
}


void afficherEtudiant(int id) {
    for (int i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].id == id) {
            printf("Identifiant: %d\n", etudiants[i].id);
            printf("Prénom: %s\n", etudiants[i].prenom);
            printf("Nom: %s\n", etudiants[i].nom);
            printf("Date de naissance: %s\n", etudiants[i].dateNaissance);
            printf("Département: %s\n", etudiants[i].departement);
            printf("Moyenne générale: %.2f\n", etudiants[i].moyenne);
            return;
        }
    }
    printf("L'étudiant n'existe pas.\n");
}


void calculerMoyenne() {
    float total = 0.0;
    for (int i = 0; i < nombreEtudiants; i++) {
        total += etudiants[i].moyenne;
    }
    printf("La moyenne générale de l'université est: %.2f\n", total / nombreEtudiants);
}


int main() {
    int choix, id;
    
    while (1) {
        printf("\nMenu des options:\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher les détails d'un étudiant\n");
        printf("3. Calculer la moyenne générale\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                ajouterEtudiant();
                break;
            case 2:
                printf("Entrez l'identifiant unique de l'étudiant: ");
                scanf("%d", &id);
                afficherEtudiant(id);
                break;
            case 3:
                calculerMoyenne();
                break;
            case 4:
                return 0;
            default:
                printf("Choix incorrect, veuillez réessayer.\n");
        }
    }
    return 0;
}
