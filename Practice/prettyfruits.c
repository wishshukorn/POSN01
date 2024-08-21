#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int b[a], c[a];
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }int sum=0;
    for(i=0;i<a;i++){
        if((0.75*b[i])>=c[i]) sum+=5;
        else sum+=3;
    }printf("%d",sum);

}