#include<stdio.h>
void palindrome(int a);
void armstrong(int b);
void palindrome(int a)
{
    int rev=0,num=0;
    int org=a;
    while(a!=0)
    {
        num=a%10;
        rev=(rev*10)+num;
        a=a/10;
    }
    if(org==rev)
    printf("The given number is palindrome\n");
    else
    printf("The given number is not palindrome\n");
}
void armstrong(int b)
{
    int org=b;
    int num=0,arm=0;
    while(b!=0)
    {
        num=b%10;
        arm+=num*num*num;
        b=b/10;
    }
    if(org==arm)
    printf("The given number is armstrong\n");
    else
    printf("The given number is not armstrong\n");
}
int main()
{
    int num;
    scanf("%d",&num);
    palindrome(num);
    armstrong(num);
}
