#include <stdio.h>

int main() {
    int kurus_1, kurus_5, kurus_10, kurus_25, kurus_50;
    int total_kurus, lira, remaining_kurus;

    // Get input for each type of coin
    printf("Enter the number of 1 kurus coins: ");
    scanf("%d", &kurus_1);

    printf("Enter the number of 5 kurus coins: ");
    scanf("%d", &kurus_5);

    printf("Enter the number of 10 kurus coins: ");
    scanf("%d", &kurus_10);

    printf("Enter the number of 25 kurus coins: ");
    scanf("%d", &kurus_25);

    printf("Enter the number of 50 kurus coins: ");
    scanf("%d", &kurus_50);

    // Calculate the total amount in kuruþ
    total_kurus = kurus_1 + (kurus_5 * 5) + (kurus_10 * 10) + (kurus_25 * 25) + (kurus_50 * 50);

    // Convert to liras and remaining kuruþ
    lira = total_kurus / 100;
    remaining_kurus = total_kurus % 100;

    // Display the result
    printf("Total: %d lira(s) and %d kurus.\n", lira, remaining_kurus);

    return 0;
}