#include<stdio.h>
#include<stdlib.h>
void main()
{
    int bills[5];
    int change=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bills[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(bills[i]==10)
        {
            change=change-5;
        }
        else if(bills[i]==20)
        {
            change=change-15;
        }
        change=change+bills[i-1];
    }
        if(change-20>=0 || bills[n-1]!=20)
            printf("true");
        else
            printf("false");
}
