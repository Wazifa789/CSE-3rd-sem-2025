#include <stdio.h>
#include <string.h> // For strcpy

// Define a structure for student information
struct Student {
    int rollNo;
    char name[50];
    float percentage;
};

int main() {
    // Declare a variable of type struct Student
    struct Student s1;

    // Assign values to the members of the structure
    s1.rollNo = 101;
    strcpy(s1.name, "Alice Smith"); // Use strcpy for string assignment
    s1.percentage = 85.5;

    // Display the student information
    printf("Student Information:\n");
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Percentage: %.2f%%\n", s1.percentage);

    return 0;
}
