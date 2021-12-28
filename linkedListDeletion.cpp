#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void deletionFromEnd(node *&head){
  node* temp = head;
  while(temp->next->next != NULL)
  {
      temp = temp->next;
  }
  temp->next = NULL;
}


void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
  
    insertAtTail(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 4);
    insertAtTail(head, 0);
    insertAtHead(head, 10);
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    display(head);
    deletionFromEnd(head);
    deletionFromEnd(head);
    display(head);
    
    return 0;
}