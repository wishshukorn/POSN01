//fibo01.c
#include<stdio.h>
int ifibo(int n){
    if(n<=1) return n;
    return(ifibo(n-1) + ifibo(n-2));
}
int main(){
    printf("%d",ifibo(5));
}