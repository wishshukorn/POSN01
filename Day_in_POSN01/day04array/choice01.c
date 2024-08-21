#include<stdio.h>
int main(){
	int a[10],i,m,j;
	for(i=0;i<10;i++){
		printf("input number %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i]<a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
