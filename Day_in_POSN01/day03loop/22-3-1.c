#include<stdio.h>
int main(){
	int a;
	printf("Enter N = ");
	scanf("%d", &a);
	if(a<0||a>255){printf("Number error");return 0;}
	int binnum=0, power=0;
	while(a>0){
		int rem = a%2;
		int temp = pow(10,power);
		binnum += rem*temp;
		power++;
		a/=2;
	}
	printf("%d",binnum);
	return 0;
}
