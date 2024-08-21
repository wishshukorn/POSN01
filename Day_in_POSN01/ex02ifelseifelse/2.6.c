#include<stdio.h>
int main(){
	char a;
	printf("Enter string: ");
	scanf("%c",&a);
	if(a>='a'&&a<='z') printf("%c",a-32);
	else if(a>='A'&&a<='Z') printf("%c",a+32);
	else return 0;
	return 0;
}
