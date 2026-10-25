#include <stdio.h>

int main() {
    int a, b, c, d, e, total;
    float average;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    average = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f", average);

    return 0;
}
