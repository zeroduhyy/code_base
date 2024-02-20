#include <stdio.h>
#include <math.h>
// 通过递归的方式循环计算出平方根

int main()
{
    int a;
    float x = 1, y = 1;

    scanf("%d", &a);
    do
    {
        x = y;
        y = (x + a / x) / 2;

    } while (fabs(x - y) >= 0.00001);

    printf("%.3f", x); // 保留三位小数

    return 0;
}