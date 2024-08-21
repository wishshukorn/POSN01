#include<stdio.h>
int main(){
	int n,i,j;
	printf("input n (nxn): ");
	scanf("%d", &n);
	int m[n][n],o[n*2];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	int sum,sum1;
	for(i=0;i<n;i++){
		sum=0;
		sum1=0;
		for(j=0;j<n;j++){
			sum+=m[j][i];
			sum1+=m[i][j];
		}
		o[i]=sum;
		o[2*n-i-1]=sum1;
	}
	for(i=2*n;i>=2;i--){
		if(o[i-1]!=o[i-2]){printf("No");return 0;}
	}
	printf("Yes");return 0;
}

