#include <stdio.h>
int main()
{
  int L,M,i,j,k=0;
  scanf("%d%d",&L,&M);
    int arr[L+1],a[M*2];
  for(i=0;i<=L;i++){
    arr[i]=1;
  }
  for(i=0;i<M*2;i++){
    scanf("%d",&a[i]);
  }
 
  for(i=0;i<M;i++){
     j=a[i*2];
    while(j<=a[i*2+1]){
        
    arr[j]=0;
    j++;
    }
  }
    for(i=0;i<L+1;i++){
        k += arr[i];
    }
    printf("%d",k);
    return 0 ;
}