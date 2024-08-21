#include <stdio.h>
int func1(int z,int t)
{ if(z==0) return t;
else
{ t=t+10;
return func1(z-5,t);
}
}
int main()
{ int i,a[6]={5,10,15,20,25,30};
for(i=0 ; i<6 ;i++)
{ printf("%d ",a[i]=func1(a[i],i));
}
}
