#include<stdio.h>
int main()
{
int n,Y,sum=0 ;
scanf("%d",&n);
while (n!=0)
{
   Y=n%10;
   n=n/10;
sum=sum+Y;
}
printf("%d \n",sum);
   
   return 0;  
}