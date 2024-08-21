#include<stdio.h>
int main(){
	int a, b, c;
	printf("Please enter midterm score: ");
	scanf("%d", &a);
	if(a<0||a>100){
		return 0;
	}
	printf("Please enter final score: ");
	scanf("%d", &b);
	if(b<0||b>100){
		return 0;
	}
	c = (a+b)/2;
	printf("Your Score: %d \%\n", c);
	if(c>=80&&c<=100){
		printf("Grade = G, Good");
	}else if(c>=50&&c<80){
		printf("Grade = P, Pass");
	}else if(c>=0&&c<50){
		printf("Grade = F, Fail");
	}
	return 0;
}
