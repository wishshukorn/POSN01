//factorial03.c
#include<stdio.h>
int iFact(int n){
    int fact;
    if(n==0) return 1;
    else fact = n * iFact(n-1);
    return fact;
}
int main(){
    printf("%d",iFact(5));
}