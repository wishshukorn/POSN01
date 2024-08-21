#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==1){
		for(i=0;i<b;i++){
			for(j=0;j<b-i;j++){
				printf(" ");
			}
			printf("/\n");
		}
		for(i=0;i<b;i++){
			for(j=0;j<=i;j++){
				printf(" ");
			}
			printf("\\\n");
		}
	}
}
