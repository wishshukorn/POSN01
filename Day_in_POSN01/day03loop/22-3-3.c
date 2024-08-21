#include<stdio.h>
int main(){
	int i=0,a,num=0,up=0,low=0,sc=0;
	char name[50];
	printf("Enter text: ");
	gets(name);
	while(name[i]!='\0'){
		a=name[i];
		if(a>=48&&a<=57) num++;
		else if(a>=65&&a<=90) up++;
		else if(a>=97&&a<=122) low++;
		else sc++;
		i++;
	}
	printf("#0-9=%d\n",num);
	printf("#A-Z=%d\n",up);
	printf("#a-z=%d\n",low);
	printf("special characters=%d\n",sc);
	return 0;
}
