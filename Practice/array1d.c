//array1d.c
#include<stdio.h>
int main(){
    int array[] = {1,2,3,4};
    int total = 0;
    for(int  i=0;i<sizeof(array)/sizeof(int);i++){
        total += array[i];
    }printf("%d",total);
}