#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a1,a2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       scanf("%d %d",&a1,&a2);
       while(a1!=a2)
       {
        if(a1>a2)
        {
            a1=a1-a2;
        }
        else if(a2>a1)
        {
            a2=a2-a1;
        }
       }
       printf("%d",a1); 
    }


    
       
    return 0;
}