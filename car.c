#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float ratePerDay;
};

int main() {
    struct Car cars[3];
    int i, days;

    
    printf("Enter details for 3 cars:\n");
    for (i = 0; i < 3; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Enter Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Enter Car Model: ");
        scanf("%s", cars[i].model);
        printf("Enter Rental Rate per Day: ");
        scanf("%f", &cars[i].ratePerDay);
    }

    printf("\nEnter number of rental days: ");
    scanf("%d", &days);
    
    printf("\n------ Car Rental Details ------\n");
    for (i = 0; i < 3; i++) {
        float totalCost = cars[i].ratePerDay * days;
        printf("\nCar %d Details:\n", i + 1);
        printf("Car ID: %d\n", cars[i].carID);
        printf("Model: %s\n", cars[i].model);
        printf("Rate per Day: %.2f\n", cars[i].ratePerDay);
        printf("Total Rental Cost for %d days: %.2f\n", days, totalCost);
    }

    return 0;
}