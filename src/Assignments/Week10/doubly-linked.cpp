#include "doubly-linked.h"

List::List()
{
    first = NULL;
}

List::~List()
{
    Node *temp;
    while (first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

void List::insert(int n)
{
    Node *newNode = new Node;
    newNode->val = n;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (first == NULL)
    {
        first = newNode;
    }
    else
    {
        Node *temp = first;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void List::reverse(){
    Node *current = first;
    Node *next = NULL;
    Node *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        current->prev = next;
        prev = current;
        current = next;
    }
    first = prev;
}

void List::print()
{
    Node *current = first;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}