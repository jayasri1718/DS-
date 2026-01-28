#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    
    struct Student student1, student2;
    float average_marks;
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    
    scanf("%s",student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.total_marks);

    printf("\n"); 
    printf("Enter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.total_marks);

    printf("\n--- Student Information ---\n");
    printf("Student 1:\n");
    printf("  Name: %s\n", student1.name);
    printf("  Age: %d\n", student1.age);
    printf("  Total Marks: %.2f\n", student1.total_marks); 

    printf("Student 2:\n");
    printf("  Name: %s\n", student2.name);
    printf("  Age: %d\n", student2.age);
    printf("  Total Marks: %.2f\n", student2.total_marks);

    average_marks = (student1.total_marks + student2.total_marks) / 2.0;
    printf("\nAverage of Total Marks for both students: %.2f\n", average_marks);

    return 0;
}