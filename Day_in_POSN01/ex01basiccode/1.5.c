#include<stdio.h>
main(){
	int be, ae, i, a=0, b=0;
	printf("input A.E.: ");
	scanf("%d", &ae);
	be = ae + 543;
	for(i=10;i<=10000;i=i*10){
		a = a + (ae%i/(i/10));
		b = b + (be%i/(i/10));
	}
	printf("%d",a + b);
}
