#include <stdio.h>
//将十进制转化为八进制


void set(int x)
{
   if(x>=8)
   set(x/8);
    printf("%d",x%8);   
}//这里依旧是循环套路，非常经典重要！

int main()
{
    int a;
    scanf("%d",&a);
   set(a);


    return 0;
}