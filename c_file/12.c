#include <stdio.h>

//求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。


int main()
{
    int n,m;
    long long Sn =0,j=1;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {

         j = j*m;
        
        Sn = Sn +j ; 

    }
    //这里的循环很重要，注意每次都乘上一个数，算法优化！

    printf("%lld",Sn);



    return 0;
}
