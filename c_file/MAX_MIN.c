#include <stdio.h>

// 计算最大公约数
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// 计算最小公倍数
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return 0;
}
