#include<stdio.h>
#include<math.h>
int main()
{
    int T,n1,n2,Y,n3,sum=0,j,n4,count=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&n1,&n2);
    
    for( j=n1;j<=n2;j++)
    {
        n4=j;
       while(n4!=0)
       {
        n4=n4/10;
        count++;
       }
        n3=j;
        while(n3!=0)
        {
            Y=n3%10; 
            n3=n3/10; 
            sum=sum+pow(Y,count); 
        }
        if(sum==j)
        {
            printf("%d ",sum);
        }
        sum=0;
        count=0;
        
    }
    }
    return 0;
}