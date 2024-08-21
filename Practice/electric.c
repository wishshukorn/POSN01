#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int d,max[a],t;
    for(int i=0;i<a;i++){
        max[i]=0;
        t=0;
        for(int j=0;j<b;j++){
            scanf("%d",&d);
            if(d-t>=max[i]){
                max[i]=d-t;
            }
            t=d;
        }
    }
    int min=max[0];
    for(int i=0;i<a;i++){
        if(max[i]<min) min=max[i];
    }
    printf("%d\n",min);
}