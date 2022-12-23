#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int t1){
    int sum=0,j=1,Y;
    for(int i=1;i<=t1;i++)
    {
        j=j*i;
    }
    while(j!=0)
    {
        Y=j%10;
        j=j/10;
        sum=sum+Y;
    }
        printf("%d",sum);
}
int main() 
{
    int t1,n;
    scanf("%d",&n);
    // int sum=0;
    for( int f=0;f<n;f++)
    {
       scanf("%d",&t1);
       func(t1);
    // for(int i=1;i<=t1;i++)
    // {
    //     j=j*i;
    // }
    // while(j!=0)
    // {
    //     Y=j%10;
    //     j=j/10;
    //     sum=sum+Y;
    // }
    //    printf("%d",sum);
    }

     
    return 0;
}