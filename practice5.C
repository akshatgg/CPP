#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int T,n,j;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int sum =0;
        scanf("%d",&n);
        for(j=2;j<=n;j++)
        {
            int count=0;
            for(int z=1;z<=j;z++)
            {
            if(j%z==0)
            {
                count++;
            }     
           }
            
            if(count==2)
            {
               sum=sum+j;
            }
              
        }
    
        printf("%d\n",sum);
    }
      
    return 0;
}
