#include<stdio.h>
#include<math.h>
int main(){
    int a,b,sum01=0,sum02=0,sum03=0;
    for(int i=10;i<=20;i++){        //sum n=10 20
        sum01=0;
        sum02=0;
        for(int j=1;j<=i;j++){      // sum i=1 n
            a=pow(j,3)-pow(j-1,3);
            b=(2*j)-1;
            sum01=sum01+a;
            sum02=sum02+b;
        }
        sum03=sum03+sum01/sum02;
    }
    printf("%d",sum03);
}