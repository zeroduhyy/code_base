#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//两边闪现字符


int main()
{   
    char arr1[] = "we are 6";
    char arr2[] = "########";

    int left = 0;

    int right = strlen(arr1)-1;

    while(left <= right )
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        left++;
        right--;
        Sleep(1000);
        system("cls");
    }


    system("pause"); 
    return 0;
}