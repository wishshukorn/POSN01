#include<stdio.h>
int main(){
	int a,b,i,c[20],j;
	
	scanf("%d",&a);
	if(a>20) return 0;
	
	for(i=0;i<a;i++){
		scanf("%d",&c[i]);
		if(c[i]>20) return 0;
	}
	for(i=0;i<a;i++){
		for(j=0;j<c[i];j++){
			printf(" ");
		}printf("/\n");
		for(j=0;j<c[i];j++){
			printf(" ");
		}printf("\\\n");
	}
}
