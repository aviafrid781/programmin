#include<bits/stdc++.h>
using namespace std;
void print(struct node *head);

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

struct node *deleted (struct node *head, int data)
{

    struct node *dummyhead = (struct node*)malloc(sizeof(struct node));
    dummyhead->next=head;
    struct node *temp=dummyhead;

    while(temp->next!=NULL)
    {
        if(temp->next->data==data)
        {
            temp->next=temp->next->next;
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    return  dummyhead->next;

}


void print(struct node *head)
{
    struct node *curr=  head;
    while(curr!=NULL)
    {
        cout<<" -> " << curr->data;
        curr = curr->next;
    }

}

int main()
{

    int arr[]= {4,78,23,60};

    struct node *head=NULL;

    head = singleLinkList(arr,4);

    struct node *newhead = head;

    struct node *newhead1 = deleted(newhead,4);
    print(newhead1);


}




