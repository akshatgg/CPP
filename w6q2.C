#include<stdio.h>
int main()
{
    int i,j,A[6],sum=0;
    for(int j=0;j<6;j++)
    {
        scanf("%d",&A[j]);
    }
    for(j=0;j<6;j++)
    {
        sum=sum+A[j];
    }
    printf("%d",sum);
    return 0;
}