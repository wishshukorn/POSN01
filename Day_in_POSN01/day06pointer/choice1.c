#include<stdio.h>
#include<string.h>
int main(){
	char a[20], b[20];
	printf("Enter text: ");
	gets(a);
	printf("Enter text: ");
	gets(b);
//	int sum=0, sum1=0, i;
//	for(i=0;i<strlen(a);i++){
//		sum+=a[i];
//	}
//	for(i=0;i<strlen(b);i++){
//		sum1+=b[i];
//	}
//	if(sum==sum1) printf("yes");
//	else printf("no");
//	return 0;
	char *p,*q;
	p=&a[0];
	q=b;
	int i,sum=0,sum1=0;
	i=0;
	while(*(p+i)!='\0'){
		sum+=*(p+i);
		i++;
	}i=0;
	while(*(q+i)!='\0'){
		sum1+=*(q+i);
		i++;
	}
	if(sum==sum1) printf("yes");
	else printf("no");
	return 0;
}
