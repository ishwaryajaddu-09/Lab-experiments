#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, amount, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    amount = p * pow(1 + r / 100, t);
    ci = amount - p;

    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f", amount);

    return 0;
}
