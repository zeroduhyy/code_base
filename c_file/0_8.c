#include<stdio.h>
#include<string.h>
//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。


int main()
{
    char str[100];

    int i,letter=0,number=0,space=0,other=0;

    gets(str);//字符串输入


        for(i=0;i<strlen(str);i++)//用到strlen函数需要string.h头文件
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')

            letter++;//字母个数增一

        else if(str[i]>='0'&&str[i]<='9')//单引号易出错

            number++;//数字个数增一

        else if(str[i]==' ')

            space++;//空格个数增一

        else
            other++;//其他字符个数增一
    }


    printf("%d %d %d %d",letter,number,space,other);



    return 0;
}