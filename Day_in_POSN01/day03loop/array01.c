#include<stdio.h>
int main(){
	int a[10],t,j,i;
	for(i=0;i<10;i++){
		printf("Enter number: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
