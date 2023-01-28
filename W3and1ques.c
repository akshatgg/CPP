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
if(sum<=9)
   {
      printf("%d \n",sum);
  }
  else if ( sum>9)
  {
   int y,sum1;
   while(sum!=0)
   {
      y=sum%10;
      sum=sum/10;
      sum1=sum1+y;
   }
   printf("%d \n",sum1);


  }
   return 0;  
}