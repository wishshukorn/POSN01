#include<stdio.h>
int main(){
	int a, i, e=0, o=0;
	for(i=0;i<5;i++){
	printf("input number: ");
	scanf("%d", &a);
	if(a%2==0){
		e++;
	}else{
		o++;
	}
	}
	printf("odd: %d\n", o);
	printf("even: %d", e);
}
