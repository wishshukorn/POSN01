#include<srdio.h>
int main(){
	int a, b, c, d;
	printf("input score 1 (0-100): ");
	scanf("%d", &a);
	if(a<0||a>100){
		printf("Invalid input!!");
	}
	printf("input score 2 (0-100): ");
	scanf("%d", &b);
	if(b<0||b>100){
		printf("Invalid input!!");
	}
	printf("input score 3 (0-100): ");
	scanf("%d", &c);
	if(c<0||c>100){
		printf("Invalid input!!");
	}
	printf("input score 4 (0-100): ");
	scanf("%d", &d);
	if(d<0||d>100){
		printf("Invalid input!!");
	}
	printf("avg: %d", (a+b+c+d)/4);
}
