#include<stdio.h>

int min(int a, int b)
{
    if (a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

void main()
{
    int n;
    scanf("%d", &n);
    int m = 2*n-1;
    int vector[m];

    for (int i=0; i<m; i++)
    {
        if(i<n)
        {
            vector[i]=i;
        }
        else
        {
            (vector[i]=m-i-1);
        }
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", n - min(vector[i], vector[j]));
        }
        printf("\n");
    }
}
