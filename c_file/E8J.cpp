#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define E 1e-9

double atk,cr,cd,em;
double base=1446.853458,type,damage;
int ys[10],fy[10],cyh,n,t,da;
int i,j;

double pt_da();
double zf_da();
double jh_da();
int qz(double);

int main(){
	scanf("%d%lf%lf%lf%lf",&n,&atk,&cr,&cd,&em);
	for(j=0;j<n;j++){
		scanf("%d",&t);
		if(t==0){
			damage+=pt_da();
		}
		if(t==1){
			if(ys[2]==1){
				if(cyh==5){
					type=2;
					damage+=zf_da();
				}
				else cyh++;
				ys[2]=0;
				fy[2]++;
				damage+=pt_da();
			}
			else if(ys[3]==1){
				ys[5]=1;
				ys[3]=0;
				damage+=pt_da();
			}
			else if(ys[4]==1){
				ys[4]=0;
				damage+=pt_da();
			}
			else if(ys[5]==1){
				type=1.15;
				damage+=jh_da();
				fy[1]++;
			}
			else {
				damage+=pt_da();
				ys[1]=1;
			}
		}
		if(t==2){
			if(ys[1]==1){
				if(cyh==5){
					type=2;
					damage+=zf_da();
				}
				else cyh++;
				ys[1]=0;
				fy[2]++;
				damage+=pt_da();
			}
			else if(ys[3]==1){
				ys[3]=0;
				damage+=pt_da();
			}
			else if(ys[4]==1){
				ys[4]=0;
				damage+=pt_da();
			}
			else if(ys[5]==1){
				ys[5]=0;
				if(cyh==5){
					type=2;
					damage+=zf_da();
				}
				else cyh++;
				fy[2]++;
				damage+=pt_da();
			}
			else {
				damage+=pt_da();
				ys[2]=1;
			}
		}
		if(t==3){
			if(cyh>0){
				type=3;
				for(i=0;i<cyh;i++){
					damage+=zf_da();
					fy[3]++;
				}
				cyh=0;
			}
			if(ys[1]==1){
				ys[5]=1;
				ys[1]=0;
				damage+=pt_da();
			}
			else if(ys[2]==1){
				damage+=pt_da();
				ys[2]=0;
			}
			else if(ys[4]==1){
				damage+=pt_da();
				ys[4]=0;
			}
			else if(ys[5]==1){
				type=1.25;
				damage+=jh_da();
				fy[0]++;
			}
			else {
				damage+=pt_da();
				ys[3]=1;
			}
		}
		if(t==4){
			if(cyh>0){
				type=3;
				for(i=0;i<cyh;i++){
					damage+=zf_da();
					fy[4]++;
				}
				cyh=0;
			}
			if(ys[1]==1){
				damage+=pt_da();
				ys[1]=0;
			}
			else if(ys[2]==1){
				damage+=pt_da();
				ys[2]=0;
			}
			else if(ys[3]==1){
				damage+=pt_da();
				ys[3]=0;
			}
			else if(ys[5]==1){
				damage+=pt_da();
				ys[5]=0;
			}
			else {
				damage+=pt_da();
				ys[4]=1;
			}
		}
	}
	if(cyh>0){
		type=2;
		for(i=0;i<cyh;i++)damage+=zf_da();
	}
	da=qz(damage);
	printf("%d",da);
	for(i=0;i<5;i++)printf(" %d",fy[i]);
	
	
	return 0;
}

double pt_da(){
	return atk*(1+cr*cd);
}

double zf_da(){
	return type*base*(1+16*em/(2000+em));
}

double jh_da(){
	return (atk+type*base*(1+5*em/(1200+em)))*(1+cr*cd);
}

int qz(double x){
	if(x+0.5>=(int)x+1)return (int)x+1;
	else return (int)x;
}


