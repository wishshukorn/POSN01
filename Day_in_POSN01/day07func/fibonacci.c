#include<stdio.h>

//void cf(int a){
//	int a1,a2,a3;
//	if(a>0){
//		a3=1;
//		a1=a2;
//		a2=a3;
//		printf("%d ",a3);
//		cf(a-1);
//	}
//}

int main(){
	int a,a1=0,a2=1,c,i;
	scanf("%d",&a);
	if(a<2||a>20) return 0;
	for(i=0;i<a;i++){
		printf("%d ",a1);
		c=a1+a2;
		a1=a2;
		a2=c;
	}
}
