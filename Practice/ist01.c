//ist01.c
#include<stdio.h>
int main(){
    int i,j,key;
    int a[6]={5,2,4,6,1,3};
    for(j=1;j<6;j++){
        key=a[j];
        i=j-1;
        while(a[i]>key){
            a[i+1] = a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}