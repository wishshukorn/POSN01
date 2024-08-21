
#include <stdio.h>
	int main(){   
		int A;   
     	float  iR,M, R, Income,tax,M2,M3;
		scanf("%d %f", &A,&M);     	
		if(A<20) iR=7.0;
		else if(A>=20&&A<=50) iR=5.0;
		else iR=3.0;	
		tax=(iR*15)/100;
		iR=iR-tax;
		R = iR/100;         
		Income = M * (1+R);
		printf("%.2f\n",Income);
		M=Income;	//conpute Year 2
		A++;		//increment Age
		if(A<20) iR=7.0;
		else if(A>=20&&A<=50) iR=5.0;
		else iR=3.0;	
		tax=(iR*15)/100;
		iR=iR-tax;
		R = iR/100;          
		Income = M * (1+R);
		printf("%.2f\n",Income);
		M=Income;
		A++;
		if(A<20) iR=7.0;
		else if(A>=20&&A<=50) iR=5.0;
		else iR=3.0;	
		tax=(iR*15)/100;
		iR=iR-tax;
		R = iR/100;          
		Income = M * (1+R);
		printf("%.2f\n",Income);
}


