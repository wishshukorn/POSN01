#include<stdio.h>
int main(){
	int a,i,j,c;
	printf("Enter number: ");
	scanf("%d", &a);
	for(i=0;i<=a*a;i++){
		int b=0;
		for(j=1;j<=a*a;j++){
			if(i%j==0) b++;
		}
		if(b==2){printf("%d ",i);c++;}
		if(c==a) return 0;
	}
	return 0;
}
