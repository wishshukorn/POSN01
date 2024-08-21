#include<stdio.h>
int main(){
	int a,i,j;
	char b='A';
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			if(b=='Z'+1) b='A';
			printf("%c",b);
			b++;
		}printf("\n");
	}
}
