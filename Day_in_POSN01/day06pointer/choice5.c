#include<stdio.h>
#include<math.h>
int main(){
	int a[5]={0,1,2,4,0};
	int b[5]={0,0,7,9,5};
	int i,j=5-1,e=0,f=0;
//	for(i=0;i<5;i++){
//		e+=(a[j]*pow(10,i));
//		f+=(b[j]*pow(10,i));
//		j--;
//	}
//	printf("%d ",e+f);
	int *p,*q;
	p=a;
	q=b;
	for(i=0;i<5;i++){
		e+=(*(p+j)*pow(10,i));
		f+=(*(q+j)*pow(10,i));
		j--;
	}
	printf("%d ",e+f);
	return 0;
}
