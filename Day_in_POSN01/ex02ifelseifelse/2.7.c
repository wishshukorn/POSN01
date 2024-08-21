#include<stdio.h>
#include<math.h>
int main(){
	int r,a;
	float b;
	printf("Please input radius: ");
	scanf("%d",&r);
	printf("Calculator Menu: \n\t1. Find area\n\t2. Find circumference\nChoose menu: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Area = %.2f", 3.14*r*r);
			break;
		case 2:
			printf("Circumference = %f", 3.14*r*2);
			break;
	}return 0;
}
