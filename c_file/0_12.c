#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b = (int)(a/3);
    if(a%3!=0)
    {
        b++;
    }

    printf("%d",b);



    return 0;
}