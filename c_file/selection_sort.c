#include <stdio.h>
#include <string.h>
//选择排序法



//注意赋值时循环的起始和结束条件，不能混乱。

void selection_sort(int arr[],int sz)
{
    int i;
    for(i=0;i<sz;i++)
    {
        int j,temp;
        for(j=i;j<=sz-1;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



