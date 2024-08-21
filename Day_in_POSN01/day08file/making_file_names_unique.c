#include<stdio.h>
#include<string.h>
int main(){
	char a[20][20],b,snum[10];
	int i=0,j,c=1;
	printf("names: ");
	for(i=0;i<4;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<4;i++){
		c=1;
		for(j=i+1;j<4;j++){
			if(strcmp(a[i],a[j])==0){
				itoa(c,snum,10);
				strcat(a[j],"(");
				strcat(a[j],snum);
				strcat(a[j],")");
				c++;
			}
		}
	}
	for(i=0;i<4;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
