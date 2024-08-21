#include<stdio.h>
#include<math.h>
int main(){
	int a,power=0,total=0,r;
	printf("input number: ");
	scanf("%d", &a);
	while(a!=0){
		r=a%2;
		total+=r*pow(10,power);
		a/=2;
		power++;
	}
	printf("%d",total);
	return 0;
}
