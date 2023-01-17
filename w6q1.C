#include<stdio.h>
int main()
{
    int A[3][3];
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
A[j][i]=A[i][j];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d  ",A[j][i]);
    }
    // printf("\n");
}

    return 0;
}