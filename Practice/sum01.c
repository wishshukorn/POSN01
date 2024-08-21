//sum01.c
#include<stdio.h>
int isum(int n){
    int sum;
    if(n==0) return 0;
    else sum = n + isum(n-1);
    return sum;
}
int main(){
    printf("%d",isum(5));
}