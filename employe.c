#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter employee details:\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n------ Employee Information ------\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    free(emp);

    return 0;
}