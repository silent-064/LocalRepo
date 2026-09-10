#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

node *head = NULL;

// Create Node
node *createNode(int value)
{
    node *newNode = (node*)malloc(sizeof(node));

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

// Insert at Beginning
void insertBeginning(int value)
{
    node *newNode = createNode(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at End
void insertEnd(int value)
{
    node *newNode = createNode(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at Position
void insertPosition(int pos,int value)
{
    if(pos == 1)
    {
        insertBeginning(value);
        return;
    }

    node *newNode = createNode(value);

    node *temp = head;

    for(int i=1;i<pos-1;i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Display Forward
void displayForward()
{
    node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Display Backward
void displayBackward()
{
    if(head == NULL)
        return;

    node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    cout << endl;
}

// Search
void search(int value)
{
    node *temp = head;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            cout << "Found at Position " << pos << endl;
            return;
        }

        temp = temp->next;
        pos++;
    }

    cout << "Not Found" << endl;
}

// Count Node
int countNode()
{
    node *temp = head;
    int cnt = 0;

    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

// Delete Beginning
void deleteBeginning()
{
    if(head == NULL)
        return;

    node *temp = head;

    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    free(temp);
}

// Delete End
void deleteEnd()
{
    if(head == NULL)
        return;

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    free(temp);
}

// Delete Position
void deletePosition(int pos)
{
    if(head == NULL)
        return;

    if(pos == 1)
    {
        deleteBeginning();
        return;
    }

    node *temp = head;

    for(int i=1;i<pos;i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}

// Reverse Doubly Linked List
void reverseList()
{
    node *temp = NULL;
    node *current = head;

    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if(temp != NULL)
        head = temp->prev;
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "Forward : ";
    displayForward();

    cout << "Backward : ";
    displayBackward();

    insertBeginning(5);

    cout << "After Insert Beginning : ";
    displayForward();

    insertPosition(3,15);

    cout << "After Insert Position : ";
    displayForward();

    search(20);

    cout << "Total Node = " << countNode() << endl;

    deleteBeginning();

    cout << "After Delete Beginning : ";
    displayForward();

    deleteEnd();

    cout << "After Delete End : ";
    displayForward();

    deletePosition(2);

    cout << "After Delete Position : ";
    displayForward();

    reverseList();

    cout << "After Reverse : ";
    displayForward();

    return 0;
}