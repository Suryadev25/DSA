#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)new (struct node);
        cout << "Enter data" << endl;
        // scanf("%d", &newnode->data);
        cin >> newnode->data;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Do you want to continue (0,1)?" << endl;
        cin >> choice;
        temp = head;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
            /* code */
        }
    }
    return 0;
}