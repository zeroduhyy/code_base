#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                // 0x^2 + 0x + 0 = 0
                printf("infinite solutions");
            } else {
                // 0x^2 + 0x + c = 0, c ≠ 0
                printf("No real root");
            }
        } else {
            // bx + c = 0
            printf("%.2lf", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            // 无实根
            printf("No real root");
        } else if (delta == 0) {
            // 一个实根
            printf("%.2lf", -b / (2 * a));
        } else {
            // 两个实根
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > x2) {
                double tmp = x1;
                x1 = x2;
                x2 = tmp;
            }
            printf("%.2lf %.2lf", x1, x2);
        }
    }
    return 0;
}
