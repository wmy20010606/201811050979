#include <stdio.h>
int fun(int *a,int *b)
{
int c=10*(*a/10)+(*b/10)+1000*(*a%10)+100*(*b%10);
return c;
}
int main()
{
int a;
int b;
printf("请输入两个两位数a,b:");
scanf("%d",&a);
scanf("%d",&b);
int c=fun(&a,&b);
printf("c=%d",c);
return 0;
}
