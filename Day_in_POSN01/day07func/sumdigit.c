#include<stdio.h>

int sumnum(int a){
	int sum=0;
	while(a!=0){
		sum+=a%10;
		a=a-(a%10);
		a=a/10;
		sumnum(a);
	}return sum;
}

int main(){
	int a;
	scanf("%d",&a);
	if(a<0||a>1000000) return 0;
	printf("%d",sumnum(a));
	return 0;
}
