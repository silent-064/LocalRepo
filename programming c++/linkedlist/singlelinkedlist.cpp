#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

// Create Node
node *createNode(int value)
{
    node *newNode = (node *)malloc(sizeof(node));

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

// Insert at Beginning
void insertBeginning(int value)
{
    node *newNode = createNode(value);

    newNode->next = head;
    head = newNode;
}

// Insert at End
void insertEnd(int value)
{
    node *newNode = createNode(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at Position (Position starts from 1)
void insertPosition(int pos, int value)
{
    if (pos == 1)
    {
        insertBeginning(value);
        return;
    }

    node *newNode = createNode(value);
    node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display
void display()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Search
void search(int value)
{
    node *temp = head;
    int pos = 1;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            cout << "Found at Position " << pos << endl;
            return;
        }

        temp = temp->next;
        pos++;
    }

    cout << "Not Found\n";
}

// Count Nodes
int countNode()
{
    node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

// Delete Beginning
void deleteBeginning()
{
    if (head == NULL)
        return;

    node *temp = head;
    head = head->next;

    free(temp);
}

// Delete End
void deleteEnd()
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    node *temp = head;
    node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}
void insertAfter(int key, int value)
{
    node *temp = head;
    while(temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout << "Value Not Found\n";
        return;
    }
    node *newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
}
// Delete Position
void deletePosition(int pos)
{
    if (head == NULL)
        return;

    if (pos == 1)
    {
        deleteBeginning();
        return;
    }

    node *temp = head;
    node *prev = NULL;

    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "List: ";
    display();

    insertBeginning(5);
    cout << "After Insert Beginning: ";
    display();

    insertPosition(3, 15);
    cout << "After Insert Position: ";
    display();

    search(20);

    cout << "Total Nodes = " << countNode() << endl;

    deleteBeginning();
    cout << "After Delete Beginning: ";
    display();

    deleteEnd();
    cout << "After Delete End: ";
    display();

    deletePosition(2);
    cout << "After Delete Position: ";
    display();

    return 0;
}