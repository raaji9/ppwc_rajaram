#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *name;
    int rollNo;
    float marks;
};

int main() {
    struct Student student;
    
    // Allocate memory for the name
    student.name = (char*) malloc(30 * sizeof(char));
    if (student.name == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    
    // Input details for the student
    printf("Enter the student's name: ");
    fgets(student.name, 30, stdin);
    student.name[strcspn(student.name, "\n")] = 0;  // Remove newline character

    printf("Enter the student's roll number: ");
    scanf("%d", &student.rollNo);
    
    printf("Enter the student's marks: ");
    scanf("%f", &student.marks);
    
    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll No: %d\n", student.rollNo);
    printf("Marks: %.2f\n", student.marks);
    
    // Free allocated memory
    free(student.name);
    
    return 0;
}
