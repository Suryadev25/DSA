
// ********************SINGLY LINKED LIST************************

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// void push_beg(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     newnode->next = *n;
//     newnode->data = newdata;
//     *n = newnode;
// }
// void push_end(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     newnode->data = newdata;
//     newnode->next = NULL;
//     Node *last = *n;
//     if (n == NULL)
//     {
//         *n = newnode;
//         return;
//     }
//     while (last->next != NULL)
//     {
//         last = last->next;
//     }
//     last->next = newnode;
//     return;
// }
// void push_at_pos(Node *n, int pos, int newdata)
// {
//     Node *newnode = new Node();
//     if (n == NULL)
//     {
//         cout << "Error";
//         return;
//     }
//     Node *temp = n;
//     Node *temp1 = n;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (i == pos - 1)
//         {
//             temp1 = temp;
//         }
//         temp = temp->next;
//     };

//     newnode->next = n->next;
//     n->next = newnode;
//     newnode->data = newdata;
// }
// Node *del_beg(Node *n)
// {
//     if (n == NULL)
//     {

//         cout << "Error" << endl;
//         return NULL;
//     }
//     Node *temp = n;
//     n = n->next;
//     free(temp);

//     return n;
// }
// void del_end(Node **n)
// {
//     if (n == NULL)
//     {

//         cout << "Error" << endl;
//         return;
//     }
//     Node *temp = *n;
//     Node *last = temp;
//     while (temp->next != NULL)
//     {
//         last = temp;
//         temp = temp->next;
//     }
//     last->next = NULL;
//     free(temp);
//     return;
// }
// Node *del_pos(Node *n, int position)
// {
//     Node *temp = n;
//     Node *temp1 = n;
//     if (position == 1)
//     {
//         n = n->next;
//         free(temp);
//     }
//     else
//     {

//         for (int i = 0; i < position; i++)
//         {
//             if (i == position - 1)
//             {
//                 temp1->next = temp->next;
//             }
//             temp1 = temp;
//             temp = temp->next;
//         }
//     }
//     return n;
// }
// void print(Node *n)
// {
//     while (n != NULL)
//     {
//         cout << n->data << " ";
//         n = n->next;
//     }
// }
// void print_rev(Node *n)
// {
//     if (n == NULL)
//         return;

//     print_rev(n->next);
//     cout << n->data << " ";
// }
// int32_t main()
// {

//     Node *head = new Node();
//     Node *second = new Node();
//     Node *thrid = new Node();

//     head->next = second;
//     head->data = 1;
//     second->next = thrid;
//     second->data = 2;
//     thrid->next = NULL;
//     thrid->data = 3;
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cout << "Enter data to push" << endl;
//     int data;
//     cin >> data;
//     push_end(&head, data);
// }
// push_at_pos(head, 2, 9);
// push_beg(&head, 0);
// push_end(&head, 4);
// print(head);
// cout << endl;
// head = del_beg(head);
// print(head);
// del_end(&head);
// cout << endl;
// print(head);
// head = del_pos(head, 2);
// cout << endl;
// print(head);

// return 0;
// }

//****************** DOUBLY LINKED LIST *****************************

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
//     Node *prev;
// };

// void print(Node *n)
// {
//     Node *temp = n;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// void print_rev(Node *n)
// {
//     if (n == NULL)
//         return;

//     print_rev(n->next);
//     cout << n->data << " ";
// }
// void push_beg(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     if (*n == NULL)
//     {
//         *n = newnode;
//     }

//     (*n)->prev = newnode;
//     newnode->next = *n;
//     newnode->prev = NULL;
//     newnode->data = newdata;
//     *n = newnode;
// }
// void push_end(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     if (*n == NULL)
//     {
//         *n = newnode;
//     }
//     Node *temp = *n;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->prev = temp;
//     newnode->data = newdata;
//     newnode->next = NULL;
// }
// void push_pos(Node **n, int pos, int newdata)
// {
//     Node *newnode = new Node();
//     if (*n == NULL)
//     {
//         *n = newnode;
//     }
//     Node *temp = *n;
//     for (int i = 0; i < pos; i++)
//     {
//         if (i == pos - 1)
//         {
//             newnode->next = temp->next;
//             newnode->prev = temp;
//             newnode->data = newdata;
//             temp->next = newnode;
//             temp->next->prev = newnode;
//             break;
//         }

//         temp = temp->next;
//     }
// }
// void del_beg(Node **n)
// {
//     Node *temp = *n;
//     if (n == NULL)
//         cout << "Error" << endl;

//     *n = (*n)->next;
//     (*n)->prev = NULL;
//     temp->next = NULL;
//     free(temp);
// }
// void del_pos(Node *n, int pos)
// {
//     Node *temp = n;
//     Node *temp1 = n;
//     for (int i = 0; i < pos; i++)
//     {
//         if (i == pos - 1)
//         {
//             temp1->next = temp->next;
//             temp->next->prev = temp->prev;
//             free(temp);
//             break;
//         }
//         temp1 = temp;
//         temp = temp->next;
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     Node *head = new Node();

//     head->prev = NULL;
//     head->next = NULL;
//     head->data = 1;

//     int n;
//     cout << "Enter how many nodes you want to inser at beginning" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the data to insert in node" << endl;
//         int data;
//         cin >> data;
//         push_beg(&head, data);
//     }
//     print(head);
//     cout << endl;

//     push_end(&head, 9);
//     print(head);
//     cout << endl;

//     push_pos(&head, 2, 8);
//     print(head);
//     cout << endl;

//     del_beg(&head);
//     print(head);
//     cout << endl;

//     del_pos(head, 2);
//     print(head);
//     cout << endl;

//     print_rev(head);
//     cout << endl;
//     return 0;
// }

//*********************Circular Singly Linked List********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void push_beg(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     if (*n == NULL)
//     {
//         newnode->next = newnode;
//         *n = newnode;
//     }
//     Node *temp = *n;

//     while (temp->next != *n)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->data = newdata;
//     newnode->next = *n;
//     *n = newnode;
// }
// void print(Node *n)
// {
//     if (n == NULL)
//     {
//         cout << "ERROR" << endl;
//     }
//     Node *temp = n;
//     while (temp->next != n)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << temp->data << " ";
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     Node *head = NULL;
//     push_beg(&head, 9);
//     push_beg(&head, 1);
//     push_beg(&head, 2);
//     push_beg(&head, 3);
//     print(head);
//     return 0;
// }

// ***********************Circular Doubly Linked List*********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
// };
// void push_beg(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     if (*n == NULL)
//     {
//         newnode->next = newnode;
//         newnode->prev = newnode;
//         *n = newnode;
//     }
//     Node *temp = *n;
//     while (temp->next != *n)
//     {
//         temp = temp->next;
//     }
//     newnode->next = *n;
//     (*n)->prev = newnode;
//     *n = newnode;
//     newnode->data = newdata;
//     newnode->prev = temp;
//     temp->next = newnode;
// }
// void print(Node *n)
// {
//     if (n == NULL)
//     {
//         cout << "NO NODES IN THE CURRENT LINKED LIST" << endl;
//     }
//     Node *temp = n;
//     while (temp->next != n)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << temp->data << " ";
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     Node *head = NULL;
//     push_beg(&head, 1);
//     push_beg(&head, 2);
//     push_beg(&head, 3);
//     push_beg(&head, 4);
//     print(head);
//     return 0;
// }

//**************************HEADER LINKED LIST*************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void insert(Node **n, int newdata)
// {
//     Node *newnode = new Node();
//     Node *first = new Node();
//     first->next = *n;
//     Node *temp = *n;
//     newnode->next = NULL;
//     newnode->data = newdata;
//     if (*n == NULL)
//     {
//         *n = newnode;
//         return;
//     }
//     // cout << "header node" << first->next->data << endl;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     return;
// }
// void print(Node *n)
// {
//     Node *temp = n;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     Node *head = NULL;
//     insert(&head, 1);
//     insert(&head, 2);
//     insert(&head, 3);
//     insert(&head, 4);
//     print(head);
//     return 0;
// }