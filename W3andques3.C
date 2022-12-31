#include<stdio.h>
int main()
{
    int T,n1,n2,Y,n3,sum=0;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&n1,&n2);
    
    for(int j=n1;j<=n2;j++)
    {
        n3=j;
        while(n3!=0)
        {
            Y=n3%10; 
            n3=n3/10; 
            sum=sum+(Y*Y*Y); 

        }
        if(sum==j)
        {
            printf("%d",j);
        }
    }
    }
    return 0;
}