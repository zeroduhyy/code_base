#include <stdio.h>

//循环法计算斐不那契数列

int fib(int x)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(x >2)
    {
        c = a + b;
        a = b;
        b = c;
        x--;

    }
    return c;

}
//此循环优化算法，比函数递归好用哦！

int main()
{
    int ac = 0;
    int d = 0;

   for(ac=1;ac<20;ac++)
    {
     d =  fib(ac);
     printf("%d ",d);

    }
    

    return 0;
}