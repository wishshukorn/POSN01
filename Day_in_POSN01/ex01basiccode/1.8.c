#include<stdio.h>
#include<math.h>
int main(){
	int x1, y1, x2, y2;
	printf("x1 y1: ");
	scanf("%d %d", &x1, &y1);
	printf("x2 y2: ");
	scanf("%d %d", &x2, &y2);
	printf("%f", sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
	return 0;
}
