#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("your number: ");
	scanf("%d", &a);
	printf("your salary: ");
	scanf("%d", &b);
	printf("your ot: ");
	scanf("%d", &c);
	d = b + c;
	if(d>=100000){
		printf("your bonus: %f", d*0.1);
	}else if(d>=70000){
		printf("your bonus: %f", d*0.07);
	}else if(d>=50000){
		printf("your bonus: %f", d*0.05);
	}else if(d>=30000){
		printf("your bonus: %f", d*0.03);
	}else{
		printf("your bonus: %f", d*0.01);
	}
} 
