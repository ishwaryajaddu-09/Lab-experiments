#include <stdio.h>

int main() {
    float speed, time, distance;

    printf("Enter speed and time: ");
    scanf("%f %f", &speed, &time);

    distance = speed * time;

    printf("Distance = %.2f", distance);

    return 0;
}
