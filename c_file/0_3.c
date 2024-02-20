#include <stdio.h>
// 判断完数，C语言网题号1017.

int ret(int x) // 这个函数用来判断是不是完美数
{
    int t, j = 0;

    for (t = 1; t < x; t++)
    {
        if (x % t == 0)
            j = j + t;
    }
    if (j == x)
    {
        return 1;
    }

    return 0;
}

void bit(int x) // 这个函数用来将已知是完美数的因数直接打印出来。
{
    int i;
    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int i = 0, k;

    scanf("%d", &i);

    for (k = 1; k <= i; k++)
    {
        if (ret(k))
        {

            printf("%d its factors are ", k);

            bit(k);

            printf("\n");
        }
    }

    return 0;
}