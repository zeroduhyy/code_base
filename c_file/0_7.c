#include <stdio.h>
// 有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。

// 这道题的循环比较简洁，注意观察，不是很懂。。。
int main()
{
    float a = 1, i, j = 2, sn = 0, temp;
    int m; // 用来确定循环的次数

    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    {
        sn += j / a;
        temp = a;
        a = j;
        j += temp;
        // 这段就是单纯用来循环加的，叠加求和。
    }

    printf("%.2f", sn);
    return 0;
}