#include <stdio.h>
#include <math.h>

//通过调用函数的方式来求100——200的素数

int  is_prime(int n)
{
    int a =1;
    for(a=2;a<=sqrt(n);a++)
    //sqrt是开平方函数，在这里是优化算法用
    {
        if(n%a == 0)
        return 0;
    }
//这里循环内的操作是一旦找到因数就结束

    return 1;
}



int main()
{
    int i = 0;
    for(i=100;i<200;i++)
    {
        if(is_prime(i) == 1)
        printf("%d ",i);
    }
  

    return 0;
}