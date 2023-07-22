//Write a C program to swap two variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=a;
    printf("%d",a);
    printf("%d",b);
}
