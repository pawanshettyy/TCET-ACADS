#include <stdio.h>
#include <math.h>

int main() {

    double a = 1.0, b = -3.0, c = 2.0;
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 and Root 2: %.2lf\n", root1);
    } else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}