#include<stdio.h>
int main(){
	char s[20];
	int i;
	printf("Input a string: ");
	gets(s);
	printf("Reverse of the string is: ");
//	for(i=strlen(s);i>=0;i--){
//		printf("%c",s[i]);
//	}
	char *p;
	int ptr=0;
	p=&s[0];
	i=0;
	while(*(p+i)!='\0'){
		ptr++;
		i++;
	}i=0;
	while(*(p+i)!='\0'){
		printf("%c",*(p+ptr-i-1));
		i++;
	}
	return 0;
}
