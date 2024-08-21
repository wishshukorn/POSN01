#include <stdio.h>
int main()
{ int i,a[5]={0};
for(i=1;i<6;i++)
a[6-i] = i * i;
for(i=4;i>-1;i--)
a[i] = a[4-i] + a[i];
for(i=4;i>-1;i--)
printf("%d ",a[i]);
}
