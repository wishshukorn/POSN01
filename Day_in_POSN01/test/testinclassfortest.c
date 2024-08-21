#include<stdio.h>
int main(void){
	int i,j,k,x=0;
	char str1[]="M11I1 GOT 1-POWERUP"; // MARIO GOT 1-POWERUP
	for(i=2;i<4;++i){
		for(j=1;j<i;++j){
			switch(i+j-1){
				case 0: x+=1;
				case 1: x+=j;
				case 2: break;
				case 3: x+-3;
				case 4: x+=1;
			}
			printf("%c", str1[x%20+j]);
		}
	}
	return 0;
}
