#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	int i,a,j;
	printf("Enter string: ");
	gets(s1);
	printf("Enter substring: ");
	gets(s2);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==s2[0]){
//			a=0;
//			for(j=0;j<strlen(s2);j++){
//				if(s1[i+j]==s2[j]) a++;
//			}
//			if(a==strlen(s2)) {printf("%d",i+1); return 0;}
//		}
//	}
//	printf("0");
//	return 0;
	char *p,*q;
	p=&s1[0];
	q=&s2[0];
	for(i=0;i<strlen(s1);i++){
		if(*(p+i)==*q){
			a=0;
			for(j=0;j<strlen(s2);j++){
				if(*(p+i+j)==*(q+j)) a++;
			}
			if(a==strlen(s2)) {printf("%d",i+1); return 0;}
		}
	}
	printf("0");
	return 0;
}
