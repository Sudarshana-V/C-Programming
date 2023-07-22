#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c",ch[i]);
    }
    char swap[n];
    for(int i=0;i<n;i++)
        swap[i]=ch[i];
    char temp[n];
    for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        temp[i]=swap[j];
    }
    for(int i=0;i<n;i++)
        printf("%c",temp[i]);

}
