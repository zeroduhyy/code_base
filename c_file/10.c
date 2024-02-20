#include <stdio.h>
//打印99乘法表(一共n行)

int main()
{
    int a,b,k;

    scanf("%d",&k);
 

    for(a=1;a<=k;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%-2d*%2d=%4d\t",b,a,a*b);

        }
      printf("\n");  
    }
    return 0;
}