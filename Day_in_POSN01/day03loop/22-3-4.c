#include<stdio.h>
int main(){
	int a,b,sum=0,i;
	float j=0;
	while(0==0){
		b=0;
		printf("Enter number: ");
		scanf("%d", &a);
		for(i=1;i<=a;i++){
			if(a%i==0) b++;
		}
		if(b==2){sum=sum+a;j++;}
		if(a==0){
			if(sum==0) printf("Average: None");
			else printf("Average: %.2f", sum/j);
			return 0;
		}
	}
	return 0;
}
