#include<stdio.h>
int main(){
	int d[50],a[50],i=0,j,s[50],sum=0;
	char c;
	FILE *fp;
	fp=fopen("receipt.txt","w");
	printf("MENU\n\t1. Choco Ring (15)\n\t2. Mango Ring (20)\n\t3. Special Donut (25)\n");
	while(0==0){
		printf("Input number of donut and amout: ");
		scanf("%d %d",&d[i],&a[i]);
		if(d[i]==0){
			fprintf(fp,"\n======== Salaya Donut ========\n");
			for(j=0;j<i;j++){
				fprintf(fp,"%d\t",a[j]);
				switch(d[j]){
					case 1:
						fprintf(fp,"Choco Ring");
						s[j]=a[j]*15;
						break;
					case 2:
						fprintf(fp,"Mango Ring");
						s[j]=a[j]*20;
						break;
					case 3:
						fprintf(fp,"Special Donut");
						s[j]=a[j]*25;
						break;
					default:
						break;
				}
				sum+=s[j];
				fprintf(fp,"\t%d\n",s[j]);
			}
			fprintf(fp,"-----------------------------------------------\n");
			fprintf(fp,"Total\t\t\t%d",sum);
			fclose(fp);
			fp=fopen("receipt.txt","r");
			while((c=getc(fp))!=EOF){printf("%c",c);}
			fclose(fp);
			return 0;
		}
		i++;
	}
}
