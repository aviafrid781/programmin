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

int searchLiskedList(struct node *head,int value)
{

    int pos=1;
    while(head!=NULL)
    {


        if(head->data == value)
        {

            return pos;
        }
        head=head->next;
        pos++;
    }
    return -1;
}



int main()
{

    int arr[]= {4,78,23,60};
    struct node *head=NULL;

    head = singleLinkList(arr,4);

    //search
    int pos=searchLiskedList(head,78);
    cout<<pos<<endl;
}
