#include<stdio.h>
int main(){
	int a,i,b=0,c=0,j;
	scanf("%d",&a);
	for(i=1;i<a;i++){
		b=0;
		for(j=1;j<a;j++){
			if(i%j==0) b++;
		}
		if(b==2) c++;
	}printf("%d",c);
}
