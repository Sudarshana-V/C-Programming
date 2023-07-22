#include<stdio.h>
#include<stdlib.h>
void Served_orders();
struct Order
{
    int Dine_In_Orders[3];
    int Take_Out_Orders[3];
    struct Order*next;
}*newOrder,*temp,*rear,*front;
int main()
{
    newOrder=malloc(sizeof(struct Order));
    int Served_Orders[6];
    int i;
    printf("Take Out Orders ");
    for(i=0;i<3;i++)
    {
       scanf("%d",&newOrder->Take_Out_Orders[i]);
    }
    printf("Dine In Orders ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&newOrder->Dine_In_Orders[i]);
    }
    newOrder->next=0;
    if(rear==0)
    {
        front=rear=newOrder;
    }
    else
    {
        rear->next=newOrder;
        rear=newOrder;
    }
    Served_orders();
}

void Served_orders()
{
    printf("Served Orders ");
    int i;
    temp=front;
    while(temp->next!=0)
    {
        for(i=0;i<2;i++)
        {
        printf("%d ",temp->Dine_In_Orders[i]);
        printf("%d ",temp->Take_Out_Orders[i]);
        temp=temp->next;
        }
    }
    printf("%d ",temp->Dine_In_Orders[3]);
    printf("%d ",temp->Take_Out_Orders[3]);
}
