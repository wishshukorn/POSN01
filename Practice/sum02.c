//sum02.c
#include<stdio.h>
int isum(int n){
    if(n==0) return 0;
    return(n+isum(n-1));
}
int main(){
    printf("%d",isum(5));
}