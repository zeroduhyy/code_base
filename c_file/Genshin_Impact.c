#include <stdio.h>
#define base 1446.853458
#define dam atk*(1+cr*cd)//普攻伤害
#define zf base*(1+((16*em)/(2000+em)))//无type的绽放伤害
#define jihua base*(1+((5*em)/(1200+em)))*(1+cr*cd)//无type的激化伤害

int n;
double atk,cr,cd,em;//输入的变量
int i;
double damage =0;
int a;//作为damage的整数存储
int five[5]={0,0,0,0,0};//定义用于输出的后五个变量为一个数组
//0.超激化；1.蔓激化；2.草原核；3.超绽放；4.烈绽放
int cao =0;//定义使用时的草原核数量
int yj = 0;//定义原激

void zf_1(int x)
{
    damage += cao*zf*3 ;
    if(x ==3){
        five[3] += cao;
    }
    if(x ==4){
        five[4] += cao;
    }
    cao = 0;
}

void zf_2()
{
    damage += zf*2 ;
    
}

void jh(int x)
{
    if(x == 3){
        damage += 1.25*jihua;
        five[0]++;
    }

    if(x == 1){
        damage += 1.15*jihua;
        five[1]++;
    }
    
}

int main()
{
    scanf("%d%lf%lf%lf%lf",&n,&atk,&cr,&cd,&em);
    int arr[n];

    damage = dam ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }//将输入存储起来先

    for(i=1;i<n;i++)
    {


        if(cao == 6)
        {
            cao = 5;
            zf_2();
        }

        damage += dam;//直接普攻伤害

        if(arr[i]== 0)//普攻
        {
            
            arr[i] = arr[i-1];
        }

       else if(arr[i] == 1)//草
        {
            if(yj ==1){
                jh(arr[i]);
                arr[i] =0;
            }
            if(arr[i-1] == 2){
                cao++;
                five[2]++;
                arr[i] =0;
            }
            if(arr[i-1] == 3){
                yj++;
                arr[i]=0;
            }
            if(arr[i-1]== 4){
                arr[i] =0;
            }

        }
        else if(arr[i] ==2)//水
        {
            if(yj == 1){
                yj =0;
                arr[i] =0;
                cao++;
                five[2]++;
            }
            if(arr[i-1]== 1){
                cao++;
                five[2]++;
            }
            if(arr[i-1] == 3||arr[i-1] == 4){
                arr[i] =0;
            }

        }
        else if(arr[i]== 3)//雷
        {
            if( yj == 1){
                jh(arr[i]);
                arr[i] =0;
            }
             if(cao != 0){
                zf_1(arr[i]);
            }
            
             
            if(arr[i-1] == 1){
                yj ++;
                arr[i] =0;
            }
            
            if(arr[i-1] == 2 || arr[i-1] == 4){
                arr[i] =0;
            }

        
        }
        else if(arr[i]==4)//火
        {
           
            if(yj == 1)
            {
                yj == 0;
                arr[i] =0;

            }


           else{
           if(cao != 0){
                zf_1(arr[i]);
                
            }


           if(arr[i-1]>= 1&&arr[i-1]<=3){
                arr[i] = 0;
            }
           }
        }
    }

    for(cao;cao>0;cao--){
        zf_2();
    }

    a = (int)(damage+0.5);
    printf("%d ",a);

    for(i=0;i<5;i++){
        printf("%d ",five[i]);
    }


    return 0;
}

/*
10 1 1 1 1
2
3
1
2
3
4
3
2
1
3
*/