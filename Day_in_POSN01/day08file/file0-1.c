#include<stdio.h>
void main(){
	FILE *fp;
	int data;
	int i;
	fp = fopen("001.txt","w");
	for(i=0;i<10;i++){
		printf("Enter integer %d: ", i+1);
		scanf("%d",&data);
		fprintf(fp,"%d\n",data);
	}
	fclose(fp);
	
	FILE *fp2;
	int data2;
	for(i=0;i<10;i++){
		printf("Enter integer %d: ", i+1);
		scanf("%d",&data);
		fprintf(fp2,"%d ",data);
	}
	fclose(fp2);
}
