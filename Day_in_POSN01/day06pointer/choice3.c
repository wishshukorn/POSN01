#include<stdio.h>
#include<string.h>
int main(){
	char s[20], *p;
	int i,ptr;
	printf("Enter text: ");
	gets(s);
	p=&s[0];
//	for(i=0;i<strlen(s);i++){
//		if(s[i]!=s[strlen(s)-i-1]){printf("no");return 0;}
//	}printf("yes");
//	return 0;
	i=0;
	ptr=0;
	while(*(p+i)!='\0'){
		ptr++;
		i++;
	}i=0;
	while(*(p+i)!='\0'){
		if(*(p+i)!=*(p+ptr-i-1)){printf("no");return 0;}
		i++;
	}printf("yes");
	return 0;
}
