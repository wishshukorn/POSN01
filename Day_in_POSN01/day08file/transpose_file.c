#include<stdio.h>
#define MAX 100
int main(){
	FILE *fp;
	char c[7][20];
	int i;
	fp = fopen("file.txt","r");
	for(i=0;i<6;i++){
		fscanf(fp,"%s",c[i]);
		
	}
	for(i=0;i<6;i+=2){
		printf("%s ", c[i]);
	}printf("\n");
	for(i=1;i<6;i+=2){
		printf("%s ", c[i]);
	}
}
