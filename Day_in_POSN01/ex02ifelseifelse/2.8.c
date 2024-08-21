#include<stdio.h>
int main(){
	int a;
	printf("Please input area: ");
	scanf("%d",&a);
	printf("Total service costs: ");
	if(a<80) printf("%f bath",a*12.5);
	else if (a>=80&&a<=200) printf("%d bath",a*10);
	else if (a>200&&a<=400) printf("%f bath",a*7.5);
	else printf("%d bath",a*5);
	return 0;
}
