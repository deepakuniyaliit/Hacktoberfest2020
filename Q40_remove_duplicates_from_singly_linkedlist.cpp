// Program to remove duplicates in singly linkedlist
#include<bits/stdc++.h>
using namespace std;


class LinkedList
{
   public:
    int data;
    LinkedList *next;
    LinkedList(int x)
    {
        data = x;
        next = NULL;
    }
};

// fuction to remove duplicates
LinkedList *removeduplicates(LinkedList *head)
{
    if(head == NULL)
    return head;

    set<int> s;
    LinkedList *curr=head;
    LinkedList *prev=NULL;
    while(curr!=NULL)
    {
        if(s.find(curr->data)!=s.end())
        {
            prev->next=curr->next;
            delete(curr);
        }
        else
        {
            s.insert(curr->data);
            prev=curr;
        }
        
        
        curr=curr->next;
        
    }
    return head;
    
}


void printlist(LinkedList *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    LinkedList *head=new LinkedList(10);
    LinkedList *curr = head;
    curr->next = new LinkedList(30);
    curr = curr->next;
    curr->next = new LinkedList(20);
    curr = curr->next;
    curr->next = new LinkedList(40);
    curr = curr->next;
    curr->next = new LinkedList(20);
    curr = curr->next;
    curr->next = new LinkedList(30);
    curr = curr->next;
    curr->next = new LinkedList(50);
    curr = curr->next;
    curr->next = new LinkedList(50);
    curr = curr->next;
    
//printlist(head);
    LinkedList *temp = removeduplicates(head);
    printlist(temp);

}
