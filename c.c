#include <stdio.h>   
#include <string.h>  


typedef struct {
    int id;                  
    char firstName[50];     
    char lastName[50];      
    char birthDate[11];      
    char department[50];     
    float grade;             
} Student;


Student students[100];
int studentCount = 0;  


void addStudent() {
    if (studentCount >= 100) {  
        printf("La limite des étudiants a été atteinte!\n");
        return;
    }

    Student newStudent;  
    
    printf("Entrez le numéro unique: ");
    scanf("%d", &newStudent.id);
    printf("Entrez le prénom: ");
    scanf("%s", newStudent.firstName);
    printf("Entrez le nom: ");
    scanf("%s", newStudent.lastName);
    printf("Entrez la date de naissance (jj/mm/aaaa): ");
    scanf("%s", newStudent.birthDate);
    printf("Entrez le département: ");
    scanf("%s", newStudent.department);
    printf("Entrez la note générale: ");
    scanf("%f", &newStudent.grade);

    students[studentCount] = newStudent;  
    studentCount++;
    printf("L'étudiant a été ajouté avec succès!\n");
}


void modifyStudent() {
    int id;
    printf("Entrez le numéro unique de l'étudiant à modifier: ");
    scanf("%d", &id);

    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            
            printf("Entrez le nouveau prénom: ");
            scanf("%s", students[i].firstName);
            printf("Entrez le nouveau nom: ");
            scanf("%s", students[i].lastName);
            printf("Entrez la nouvelle date de naissance: ");
            scanf("%s", students[i].birthDate);
            printf("Entrez le nouveau département: ");
            scanf("%s", students[i].department);
            printf("Entrez la nouvelle note générale: ");
            scanf("%f", &students[i].grade);
            printf("Les informations de l'étudiant ont été modifiées!\n");
            return;
        }
    }
    printf("Étudiant non trouvé!\n");
}


void deleteStudent() {
    int id;
    printf("Entrez le numéro unique de l'étudiant à supprimer: ");
    scanf("%d", &id);

    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;  
            printf("L'étudiant a été supprimé!\n");
            return;
        }
    }
    printf("Étudiant non trouvé!\n");
}


void showStudent() {
    int id;
    printf("Entrez le numéro unique de l'étudiant à afficher: ");
    scanf("%d", &id);

    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            
            printf("Prénom: %s\n", students[i].firstName);
            printf("Nom: %s\n", students[i].lastName);
            printf("Date de naissance: %s\n", students[i].birthDate);
            printf("Département: %s\n", students[i].department);
            printf("Note générale: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("Étudiant non trouvé!\n");
}


void calculateAverage() {
    char department[50];
    printf("Entrez le nom du département pour calculer la moyenne: ");
    scanf("%s", department);

    int count = 0;
    float total = 0;
    
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].department, department) == 0) {
            total += students[i].grade;
            count++;
        }
    }

    
    if (count > 0) {
        printf("La moyenne générale pour le département %s est %.2f\n", department, total / count);
    } else {
        printf("Aucun étudiant trouvé dans ce département!\n");
    }
}


void showStatistics() {
    printf("Nombre total d'étudiants: %d\n", studentCount);

    
    char departments[100][50];
    int depCount = 0;
    
    
    for (int i = 0; i < studentCount; i++) {
        int found = 0;
        for (int j = 0; j < depCount; j++) {
            if (strcmp(students[i].department, departments[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(departments[depCount++], students[i].department);
        }
    }

    
    for (int i = 0; i < depCount; i++) {
        int count = 0;
        for (int j = 0; j < studentCount; j++) {
            if (strcmp(students[j].department, departments[i]) == 0) {
                count++;
            }
        }
        printf("Département %s: %d étudiants\n", departments[i], count);
    }
}


void searchStudentByName() {
    char name[50];
    printf("Entrez le prénom ou le nom de l'étudiant: ");
    scanf("%s", name);

    
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].firstName, name) == 0 || strcmp(students[i].lastName, name) == 0) {
            printf("Étudiant trouvé: %s %s\n", students[i].firstName, students[i].lastName);
            return;
        }
    }
    printf("Étudiant non trouvé!\n");
}


void showDepartmentStudents() {
    char department[50];
    printf("Entrez le département: ");
    scanf("%s", department);

    printf("Étudiants dans le département %s:\n", department);
    
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].department, department) == 0) {
            printf("%s %s\n", students[i].firstName, students[i].lastName);
        }
    }
}


int main() {
    int choice;

    
    do {
        
        printf("\nMenu principal:\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Modifier un étudiant\n");
        printf("3. Supprimer un étudiant\n");
        printf("4. Afficher les détails d'un étudiant\n");
        printf("5. Calculer la moyenne générale\n");
        printf("6. Statistiques\n");
        printf("7. Rechercher un étudiant par nom\n");
        printf("8. Afficher les étudiants d'un département\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1: addStudent(); break;                  
            case 2: modifyStudent(); break;               
            case 3: deleteStudent(); break;               
            case 4: showStudent(); break;                 
            case 5: calculateAverage(); break;            
            case 6: showStatistics(); break;              
            case 7: searchStudentByName(); break;         
            case 8: showDepartmentStudents(); break;     
            case 0: printf("Au revoir!\n"); break;        
            default: printf("Choix invalide!\n"); break;
        }
    } while (choice != 0);  

    return 0;  
}

