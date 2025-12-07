#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSTUDENTS 100
#define MAXNAMELENGTH 50
#define MAXIDLENGTH 20
#define FILENAME "students.txt"

struct Student {
    char id[MAXIDLENGTH];
    char name[MAXNAMELENGTH];
    int age;
    float gpa;
    char course[MAXNAMELENGTH];
};

struct Student students[MAXSTUDENTS];
int studentCount = 0;

void displayMenu() {
    printf("\n----------------------------------------\n");
    printf("1. Add Student\n");
    printf("2. View All Students\n");
    printf("3. Search Student\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("6. Save and Exit\n");
    printf("----------------------------------------\n");
}

void addStudent() {
    if (studentCount >= MAXSTUDENTS) {
        printf("Database is full!\n");
        return;
    }
    printf("\n--- Add New Student ---\n");
    printf("Enter Student ID: ");
    scanf("%s", students[studentCount].id);
    printf("Enter Name: ");
    scanf("%s", students[studentCount].name);
    printf("Enter Age: ");
    scanf("%d", &students[studentCount].age);
    printf("Enter GPA: ");
    scanf("%f", &students[studentCount].gpa);
    printf("Enter Course: ");
    scanf("%s", students[studentCount].course);
    studentCount++;
    printf("Student added successfully!\n");
}

void viewAllStudents() {
    if (studentCount == 0) {
        printf("No students in database!\n");
        return;
    }
    printf("\n--- All Students ---\n");
    printf("%-15s %-20s %-10s %-10s %-20s\n", "ID", "Name", "Age", "GPA", "Course");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-15s %-20s %-10d %-10.2f %-20s\n", 
               students[i].id, students[i].name, students[i].age, 
               students[i].gpa, students[i].course);
    }
}

void searchStudent() {
    if (studentCount == 0) {
        printf("No students in database!\n");
        return;
    }
    char id[MAXIDLENGTH];
    printf("\n--- Search Student ---\n");
    printf("Enter Student ID: ");
    scanf("%s", id);
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("Found - ID: %s, Name: %s, Age: %d, GPA: %.2f, Course: %s\n",
                   students[i].id, students[i].name, students[i].age, 
                   students[i].gpa, students[i].course);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    printf("\n*** STUDENT DATABASE MANAGEMENT SYSTEM ***\n");
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Update feature coming soon!\n");
                break;
            case 5:
                printf("Delete feature coming soon!\n");
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
