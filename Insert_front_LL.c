#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *link;
    };
    struct node *head=NULL,*temp,*nw;
    int choice=1;
    while(choice)
    {
        nw=malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&nw->data);
        nw->link=NULL;
        if(head==NULL)
        {
            head=temp=nw;
        }
        else
        {
            temp->link=nw;
            temp=nw;
        }
        printf("Want to continue ?");
        scanf("%d",&choice);
    }
    // adding variable at the first
    temp=head;
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    printf("Enter the data that you want to add at the front");
    scanf("%d",&ptr->data);
    head=ptr;
    ptr->link=temp;
    //printing all the elements 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
    return 0;
}
