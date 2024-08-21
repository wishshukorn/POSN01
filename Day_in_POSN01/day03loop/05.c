#include<stdio.h>
int main(){
	int day, date, realday,i;
	scanf("%d", &day);
	scanf("%d", &date);
	realday = day-1;
	for(i=1;i<=date;i++){
		realday++;
		for(day;day-1>0;day--){
			printf("\t");
		}
		printf("%d\t",i);
		if(realday%7==0){
			printf("\n");
		}
	}
}
