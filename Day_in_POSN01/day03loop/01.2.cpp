#include<stdio.h>
int main(){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	for(int i=31;i>=0;i--){
		int mask=(1<<i);
		if(num&mask) printf("1");
		else printf("0");
		return 0;
	}
}
