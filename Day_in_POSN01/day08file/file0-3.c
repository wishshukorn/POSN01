#include<stdio.h>
int main(){
	FILE *fp3,*fp,*fp2;
	int i,a,b;
	fp = fopen("001.txt","r");
	fp2 = fopen("002.txt","r");
	fp3 = fopen("003.txt","w");
	for(i=0;i<10;i++){
		fscanf(fp,"%d",&a);
		fscanf(fp2,"%d",&b);
		fprintf(fp3,"%d\n",a+b);
	}
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
}
