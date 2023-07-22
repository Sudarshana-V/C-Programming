#include<stdio.h>
void main()
{
    float r,h;
    float pi=3.14;
    printf("Enter the radius and height of a cylinder :");
    scanf("%f %f",&r,&h);
    float csa=((2*pi)*(r+h));
    printf("The CSA of cylinder is %f", csa);
}
