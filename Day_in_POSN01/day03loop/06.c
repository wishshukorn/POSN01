#include<stdio.h>
int main(){
	int d,m,i,a,j;
	scanf("%d",&d);
	scanf("%d",&m);
	a=d-1;
	for(i=1;i<=m;i++){
		a++;
		for(d;d-1>0;d--){
			printf("\t");
		}
		printf("%d\t",i);
		if(a%7==0) printf("\n");
	}
	int b=a;
	printf("\n");
	for(i=1;i<=m;i++){
		a++;
		for(b;b+1>=0;b--){
			printf("\t");
		}
		printf("%d\t",i);
		if(a%7==0) printf("\n");
	}
	int c=7-a;
	printf("\n");
	for(i=1;i<=m;i++){
		a++;
		for(c;c+1>=0;c--){
			printf("\t");
		}
		printf("%d\t",i);
		if(a%7==0) printf("\n");
	}
}
