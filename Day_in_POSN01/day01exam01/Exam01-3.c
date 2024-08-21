#include<stdio.h>
int main(){
	float a;
	scanf("%f", &a);
	printf("F=%.1f\nK=%.1f\nC=%.1f\n", a, 5*(a-32)/9+273, 5*(a-32)/9);
}
