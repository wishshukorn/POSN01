#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
    }
    if(b==1){
        int d=a;
        for(int i=0;i<a;i++){
            if(d>c[i])
                printf("0\n");
            else
                printf("1\n");
            d=c[i];
        }
    }else{
        int d=c[0];

        for(int i=0;i<a;i++){
            if(i==0){
                printf("%d\n",d);
            }else if (2*d<c[i]){
                printf("1\n");
            }
            
        }
    }
}