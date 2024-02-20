
#include <stdio.h>
// 求出一个副对角线单位矩阵!!
int main()
{
    int a, i, j;

    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (j + i != a)
                printf("0 ");
            else
                printf("1 ");
        }

        printf("\n");
    }

    return 0;
}