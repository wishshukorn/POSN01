#include<stdio.h>
int main(){
	int a;
	printf("Please enter number: ");
	scanf("%d",&a);
	a%=10;
	if(a==0) printf("Zero");
	if(a==1) printf("One");
	if(a==2) printf("Two");
	if(a==3) printf("Three");
	if(a==4) printf("Four");
	if(a==5) printf("Five");
	if(a==6) printf("Six");
	if(a==7) printf("Seven");
	if(a==8) printf("Eight");
	if(a==9) printf("Nine");
	return 0;
}
