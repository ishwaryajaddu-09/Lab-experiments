#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units < 0) {
        printf("Invalid units");
    }
    else if (units <= 100) {
        bill = units * 1.50;
        printf("Bill = %.2f", bill);
    }
    else if (units <= 200) {
        bill = 100 * 1.50
             + (units - 100) * 2.50;
        printf("Bill = %.2f", bill);
    }
    else if (units <= 500) {
        bill = 100 * 1.50
             + 100 * 2.50
             + (units - 200) * 4.00;
        printf("Bill = %.2f", bill);
    }
    else {
        bill = 100 * 1.50
             + 100 * 2.50
             + 300 * 4.00
             + (units - 500) * 6.00;
        printf("Bill = %.2f", bill);
    }

    return 0;
}
