#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//经典打字关机程序，哈哈！
int main()
{
    SetConsoleOutputCP(65001);//改变字符编码，防止exe文件乱码，头文件Windows.h
    char input[10] ={0};
    system("shutdown -s -t 60");
    while(1)
    {
        printf("电脑即将关机，如果输入：我是猪，就取消关机！\n输入:>");
        scanf("%s",input);
        if(0 == strcmp(input,"我是猪") == 0)
        {

            system("shutdown -a");
            break;
        }
    }
    return 0;
}