#include <stdio.h>

int main() {
    int a, b, c, sum;
    float average;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
