#include<stdio.h>
int main(){
	FILE *fp2;
	fp2 = fopen("002.txt","w");
	int data2;
	int i;
	for(i=0;i<10;i++){
		printf("Enter integer %d: ", i+1);
		scanf("%d",&data2);
		fprintf(fp2,"%d ",data2);
	}
	fclose(fp2);
}
