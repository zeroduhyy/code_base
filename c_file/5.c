#include <stdio.h>
#include <string.h>
//高级版凯撒密码（其实一模一样）
int main()
{
    char arr[100];
    int i;

    gets(arr);


    for (int i = 0; i < strlen(arr); i++){

         if (arr[i] >= 'a' && arr[i] <= 'z')
            arr[i] = (arr[i] - 'a' + 1) % 26 + 'a';
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
            arr[i] = (arr[i] - 'A' + 1) % 26 + 'A';
    }
       


    printf("%s",arr);


    return 0;
}