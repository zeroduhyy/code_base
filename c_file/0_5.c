#include <stdio.h>
//给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
//题号1009
void sum(int x)//求出总位数
{
    int i=0;


    do
    {
        x = x/10;
        i++;

    }while(x != 0);
    printf("%d",i);

}

void space(int x)//使每个数字中间空一格
{
    if(x >= 10)
    space(x/10);
    printf("%d ",x%10);

}

void reverse(int x)//将数字反过来写
{
    do
   {    
         printf("%d",x%10);
         x = x/10;

   }while(x >0);
}

int main()
{
    int a;
    scanf("%d",&a);

    sum(a);

    printf("\n");

    space(a);

    printf("\n");

    reverse(a);

   

    return 0;
}