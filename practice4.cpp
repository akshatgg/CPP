#include<stdio.h>
int main()
{
    int T,n1,n2,Y,sum=0,k;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&n1);
        scanf("%d",&n2);
    
    for(int j=n1;j<=n2;j++)
    {
        k=j;
        while(j!=0)
        {
            Y=j%10;
            j=j/10;
            sum=sum+(Y*Y*Y);
        }
        if(sum==k)
        {
            printf("%d",k);
        }
    }
    }
    return 0;
}
    