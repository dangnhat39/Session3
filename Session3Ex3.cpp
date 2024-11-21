#include <stdio.h>
#define PI 3.14159  // Ð?nh ngh?a h?ng s? PI

int main() {
    float radius, circumference, area;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &radius);


    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

