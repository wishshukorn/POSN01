#include<stdio.h>
int main(){
	char s[20], *p;
	printf("Enter text: ");
	gets(s);
	int i;
	p=s;
	for(i=0;*(p+i)!='\0';i++){
		if(*(p+i)>='a'&&*(p+i)<='z') *(p+i)=*(p+i)-('a'-'A');
		printf("%c", *(p+i));
	}
	return 0;
}
