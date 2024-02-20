#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//猜测数字的大小



int main()
{
    SetConsoleOutputCP(65001);//改变字符编码，防止exe文件乱码
    srand(time(NULL));//随机数生成
    int a = rand()%100;//确保生成的数字在0~100之间
    int haha = 0;

    for(;;)
    {
        scanf("%d",&haha);
        

        if(haha < a)
        {
            printf("小了\n");
        }

        if(haha > a)
        {
        printf("大了\n");
        }
        if(haha == a)
        {
        printf("牛逼啊666\n");
        break;
        }

    }

    



    system("pause");
    return 0;
}