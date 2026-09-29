#include <stdio.h>

int main() {
    float P, T, R, SI;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Time (T): ");
    scanf("%f", &T);

    printf("Enter Rate (R): ");
    scanf("%f", &R);

    SI = (P * T * R) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
