#include<stdio.h>
#include<string.h>
int main()
{
	char cc[19];
	int id[16],num[24];
	int i,n=0,k,m,j=0,f,d,sum=0;
	printf("Enter Credit Card number: ");
	gets(cc);
	for(i=19;i>0;i--){
		if(cc[i-1]=='-'){
			continue;
		}
		else {
			id[n]=cc[i-1]-'0';
			n++;
		}
	}
	for(m=0;m<16;m++){
		if((m+1)%2==0){
			f=id[m]*2;
			if(f>=10){
				num[j]=f/10;
				j++;
				num[j]=f%10;
				j++;
			}
			else{
				num[j]=f;
				j++;
			}
		}
		else{
			num[j]=id[m];
			j++;
		}
	}
	for(d=0;d<=j;d++){
		sum+=num[d];
	}
	if(sum%10==0){
		printf("This Credit Card number is Real");
	}
	else {
		printf("This Credit Card number is NOT Real");
	}
	return 0;
}
