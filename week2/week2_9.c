#include <stdio.h>

// Function declaration
double calculateFuelConsumption(double distanceTraveled, double fuelEfficiency);

int main() {
    double distanceTraveled, fuelEfficiency, estimatedFuelConsumption;

    // Get user input
    printf("Enter distance traveled (in kilometers): ");
    scanf("%lf", &distanceTraveled);

    printf("Enter fuel efficiency (in kilometers per liter): ");
    scanf("%lf", &fuelEfficiency);

    // Call function to calculate estimated fuel consumption
    estimatedFuelConsumption = calculateFuelConsumption(distanceTraveled, fuelEfficiency);

    // Print result
    printf("Estimated fuel consumption: %.2f liters\n", estimatedFuelConsumption);

    return 0;
}

// Function definition
double calculateFuelConsumption(double distanceTraveled, double fuelEfficiency) {
    return distanceTraveled / fuelEfficiency;
}
