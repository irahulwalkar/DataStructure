// Introduction to Linked List
// Create 3 nodes and print nodes data iteratively.

#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};


void iterate(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    
    head->data = 6;
    head->next = second;
    
    second->data = 7;
    second->next = third;
    
    third->data = 8;
    third->next = NULL;
    
    iterate(head);
    
    return 0;
}
