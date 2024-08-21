//fibo02.c
#include<stdio.h>
int ifibo(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        ifibo(n-1);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d %d ",0,1);
    ifibo(a-2);
    return 0;
}