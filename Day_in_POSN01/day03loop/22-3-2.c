#include<stdio.h>
int main(){
	int a,i,b;
	printf("Enter +N = ");
	scanf("%d", &a);
	for(i=1;i<a;i++){
		if(a%i==0) b++;
	}
	if(b==2) printf("%d is prime number", a);
	else printf("%d is not prime number", a);
	return 0;
}

