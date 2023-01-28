#include<stdio.h>
int count(int n)
{
int sum=0;
if(n/10==0)
return n;
else
{
    while(n!=0)

{
    int c=n%10;
    sum+=c;
    n/=10;
}
return count(sum);
}
}
void main()
{
    int c=0;
    scanf("%d",&c);
    printf("%d",count(c));
}    
