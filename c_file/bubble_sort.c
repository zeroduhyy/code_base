#include <stdio.h>
//冒泡排序法

//1.每次交换次数递减，直至将最大的数移到右边
//2.通过flag判断是否交换，如果一次都没交换就直接结束排序。
void bubble_sort(int arr[],int sz)
{
    int i = 0;
    for (i=0 ;i<sz;i++)
    {
        int flag =1;
        int j =0;
        for (j=0;j< sz -1 -i;j++)//以此减少循环次数
        {
            if(arr[j]>arr[j+1])
            {
              int tmp = arr[j];
             arr[j] = arr[j+1];
             flag = 0;

            }

        }
        if (flag = 1)
        {
            break;
        }   
        

    }

}

