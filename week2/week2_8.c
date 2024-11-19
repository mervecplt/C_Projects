#include <stdio.h>

float calculateRequiredScore(float, float, float);

int main() {
    char desiredGrade;
    double minimumAvg, currentAvg, finalWeight, requiredScore;

    // Get user input
    printf("Enter desired grade: ");
    scanf("%c", &desiredGrade);

    printf("Enter minimum average required: ");
    scanf("%lf", &minimumAvg);

    printf("Enter current average in course: ");
    scanf("%lf", &currentAvg);

    printf("Enter how much the final counts as a percentage of the course grade: ");
    scanf("%lf", &finalWeight);

    // Convert percentage to decimal
    finalWeight /= 100;

    // Calculate required score
    requiredScore = calculateRequiredScore(minimumAvg, currentAvg, finalWeight);

    // Print result
    printf("You need a score of %.2f on the final to get a %c.\n", requiredScore, desiredGrade);

    return 0;
}

float calculateRequiredScore(float minimumAvg, float currentAvg, float finalWeight){
    return  (minimumAvg - (currentAvg * (1 - finalWeight))) / finalWeight;
}