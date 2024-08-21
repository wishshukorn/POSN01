#include<stdio.h>
int main(){
	float a;
	scanf("%f", &a);
	printf("K=%.1f\nC=%.1f\nF=%.1f\n", a, a-273, 9*(a-273)/5+32);
}
