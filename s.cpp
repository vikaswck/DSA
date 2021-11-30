#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int d)
    {
        data = d;
    }
};
class linkedList
{
public:
    Node *head;
    linkedList()
    {
        head = NULL;
    }
    linkedList(Node *n)
    {
        head = n;
    }

    void appendNode(Node *n)
    {
        if (head == NULL)
            head = n;
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = NULL;
        }
    }
    void printNode()
    {
        if (head == NULL)
            cout << "no node";
        else
        {
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data;
                ptr = ptr->next;
            }
        }
        cout << endl;
    }
};
int main()
{
    int data1;
    linkedList s1;
    linkedList s2;
    linkedList s3;
    do
    {
        cin >> data1;
        if (data1 != -1)
        {
            Node *n1 = new Node;
            n1->data = data1;
            s1.appendNode(n1);
        }
    } while (data1 != -1);
    do
    {
        cin >> data1;
        if (data1 != -1)
        {
            Node *n1 = new Node;
            n1->data = data1;
            s2.appendNode(n1);
        }
    } while (data1 != -1);

    Node *ptr1 = s1.head;
    Node *ptr2 = s2.head;
    cout << ptr1->data;
    cout << s1.head->data;

    s1.printNode();
    s2.printNode();
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            Node *n3 = new Node;
            n3->data = ptr1->data;
            cout << n3->data;
            s3.appendNode(n3);
            ptr1 = ptr1->next;
        }

        else
        {
            Node *n3 = new Node;
            n3->data = ptr2->data;
            cout << n3->data;
            s3.appendNode(n3);
            ptr2 = ptr2->next;
        }
    }
    while(ptr1!=NULL){
        Node *n3 = new Node;
        n3->data=ptr1->data;
        s3.appendNode(n3);
        ptr1=ptr1->next;

    }
    while(ptr2!=NULL){
        Node *n3 = new Node;
        n3->data = ptr2->data;
        s3.appendNode(n3);
        ptr2=ptr2->next;
    }
    
    // while (ptr1 != NULL)
    // {
    //     Node *n3 = new Node;
    //     n3->data = ptr1->data;
    //     s3.appendNode(n3);
    //     ptr1 = ptr1->next;
    // }
    // while (ptr2 != NULL)
    // {
    //     Node *n3 = new Node;
    //     n3->data = ptr1->data;
    //     s3.appendNode(n3);
    //     ptr2 = ptr2->next;
    // }
    s1.printNode();
    s2.printNode();
    s3.printNode();
}