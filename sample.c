#include<stdio.h>
void main()
{
int a,b,c;
printf("input the values = \n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("the values are = %d\n%d",a,b);
printf("EDITED");
}
