#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct node *singleLinkList(int arr[],int siz)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
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

void ReverseLiskedList(struct node *head)
{
    if (!head)
    {
        return;
    }
    struct node *prev = NULL, *curr = head, *next=NULL;

    while(curr!=NULL)
    {
        //store curr
        next=curr->next;
        //reverse the link
        curr->next=prev;

        prev=curr;
        curr=next;

    }
    head=prev;

    while(head!=NULL)
    {

        cout<<" ->" << head->data;
        head=head->next;
    }

}



int main()
{

    int arr[]= {4,78,23,60};
    struct node *head=NULL;

    head = singleLinkList(arr,4);
    struct node *newhead = head;


    while(head!=NULL)
    {

        cout<<head->data<<endl;
        head=head->next;
    }



    ReverseLiskedList(newhead);


}

