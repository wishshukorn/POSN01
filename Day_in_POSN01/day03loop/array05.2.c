#include<stdio.h>
int main(){
	int n,i,j;
	printf("How many singers? ");
	scanf("%d",&n);
	if(n<3||n>50) return 0;
	int a,sum,b[n];
	for(i=0;i<n;i++){
		sum=0;
		printf("Enter scores for Singer#%d: ",i+1);
		for(j=0;j<n-1;j++){
			scanf("%d",&a);
			sum+=a;
		}
		b[i]=sum;
	}
	int max = b[0];
	for(i=0;i<n;i++){
		if(b[i]>=max){
			max=b[i];
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==max){
			printf("The winner is singer#%d",i+1);
		}
	}
	printf("\nThe score is %d", max);
	return 0;
}
