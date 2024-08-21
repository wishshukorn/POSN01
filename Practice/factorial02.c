//factorial02.c
#include<stdio.h>
int iFact(int n){
    int fact = 1, x;
    for(x=1;x<=n;x++){
        fact = fact * x;
    }
    return fact;
}
int main(){
    printf("%d",iFact(5));
}