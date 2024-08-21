#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	int i,o=0;
	printf("Enter number: ");
	scanf("%s",s);
//	for(i=0;i<strlen(s);i++){
//		if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9') o++;
//	}printf("odd: %d",o);
//	return 0;
	char *p;
	p=&s[0];
	for(i=0;i<strlen(s);i++){
		if(*(p+i)=='1'||*(p+i)=='3'||*(p+i)=='5'||*(p+i)=='7'||*(p+i)=='9') o++;
	}printf("odd: %d", o);
	return 0;
}
