#include <stdio.h>
#include <math.h>

//求N以内的素数
int is_prime(int x)
{
    int a;
    for (a=2;a<=sqrt(x);a++)//这边可以巧妙的避免讨论2和3捏！
    {
        if(x%a == 0)
        return 0;
//只要找到公因数就退出
    }
return 1;
}



int main()
{
    int i,j;
    scanf("%d",&i);
    for(j=2;j<=i;j++)
    {
        if(is_prime(j) == 1)
        printf("%d\n",j);

    }
   
    return 0;
}