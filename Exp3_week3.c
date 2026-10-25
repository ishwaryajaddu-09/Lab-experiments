#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle");
        return 0;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area = %.2f", area);

    return 0;
}
