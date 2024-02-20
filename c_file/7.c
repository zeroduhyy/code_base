#include <stdio.h>
//求3阶矩阵的主、副对角线和
int main()
{
    int i,j,k=0,l=0;

    int arr[3][3];

    for(i=0;i<3;i++)
    {


        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i == j)
           {
            k += arr[i][j];
           }


            if(i + j == 2)
            {
                l += arr[i][j];
            }




        }

    }

    printf("%d %d",k,l);
    
    return 0;
}