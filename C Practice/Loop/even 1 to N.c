#include<stdio.h>
int main ()
{
    int N;
    printf("enter N:");
    scanf("%d",&N);
    for(int i=2;i<=N;i=i+2)
    {
        printf("%d ",i);
    }
}
