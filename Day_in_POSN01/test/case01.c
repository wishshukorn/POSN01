#include<stdio.h>
int main(){
	int c;
	printf("enter integer 1 or 2 or 3: ");
	scanf("%d", &c);
	switch(c){
		case 1:
			printf("ONE\n");
			break;
		case 2:
			printf("TWO\n");
			break;
		case 3:
			printf("THREE\n");
			break;
		default:
			printf("OUT OF RANGE");
	}
	return 0;
}
