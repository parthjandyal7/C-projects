#include <stdio.h>

int main() {
    int r, s, l, w;
    float area, perimeter;

    // Circle
    printf("Enter radius of circle : ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area of circle = %f\n", area);
    printf("Perimeter of circle = %f\n", perimeter);

    // Square
    printf("Enter side of square : ");
    scanf("%d", &s);
    area = s * s;
    perimeter = 4 * s;
    printf("Area of square = %f\n", area);
    printf("Perimeter of square = %f\n", perimeter);

    // Rectangle
    printf("Enter length and width of rectangle : ");
    scanf("%d %d", &l, &w);
    area = l * w;
    perimeter = 2 * (l + w);
    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f\n", perimeter);

    return 0;
}