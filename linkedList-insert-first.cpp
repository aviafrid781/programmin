#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *singleLinkList(int arr[],int siz)
{
    struct node *head=NULL, *temp=NULL, *current=NULL;

    for(int i=0; i<siz; i++)
    {

        temp=(struct node *)malloc(sizeof(struct node));

        temp->data=arr[i];
        temp->next=NULL;

        if(head==NULL)
        {

            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;

        }

    }
    return head;

}

void InsertLikedlist(struct node *head, int data)
{
    struct node  *temp =(struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->next=head;
    struct node *newhead=temp;
    struct node *curr=newhead;


    while(curr!=NULL)
    {

        cout<<" ->" << curr->data;
        curr=curr->next;
    }

}



int main()
{

    int arr[]= {4,78,23,60};

    struct node *head=NULL;

    head = singleLinkList(arr,4);

    struct node *newhead = head;





    InsertLikedlist(newhead,500);


}


