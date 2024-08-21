#include<stdio.h>
int main(){
	int m;
	scanf("%d", &m);
	printf("B1000 = %d\n", m/1000);
	printf("B500 = %d\n", (m-(m/1000)*1000)/500);
	printf("B100 = %d\n", (m-((m/1000)*1000 + ((m-(m/1000)*1000)/500)*500))/100);
	return 0;
}
