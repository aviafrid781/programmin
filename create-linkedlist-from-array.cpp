#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *CreateLinkedList (int arr[],int siz)
{
    struct node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for( i=0; i<siz; i++)
    {
        temp =(struct node * )malloc(sizeof(struct node));

        temp->data = arr[i];
        temp->next = NULL;

        if(head==NULL)
        {
            head = temp;
            current = temp;

        }

        else

        {
            current->next=temp;
            current=current->next;
        }

    }

    return head;
}

int main()
{
    struct node *head;

    int arr[]= {3,6,4,8};
    head=CreateLinkedList(arr,4);

    while(head != NULL)
    {

        cout<<head->data<<endl;
        head=head->next;

    }

}








