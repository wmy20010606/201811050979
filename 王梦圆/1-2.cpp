#include <stdio.h>
int fun(int &a,int &b)
{
int c=10*(a/10)+(b/10)+1000*(a%10)+100*(b%10);
return c;
}
int main() 
{
int i;
int j;
printf("������������λ��i,j:");
scanf("%d",&i);
scanf("%d",&j);
int c=fun(i,j);
printf("c=%d",c);
return 0;
}
