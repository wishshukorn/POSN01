#include<stdio.h>
int main(){
	char a[10];
	char name[20];
	char b;
	char c;
	
	scanf("%s", a);					// no need to &
	printf("%s", a);
	
	printf("enter name: ");
	gets(name);						// str
	printf("name: %s", name);
	
	printf("enter character: ");
	b = getchar();					// char show
	printf("you type: %c", b);
	
	printf("enter character: \n");
	c = getch();					// char nonshow
	printf("you type: %c", c);
	
	return 0;
}
