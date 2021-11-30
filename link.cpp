#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    // Node(int k, int d)
    // {
    //     key = k;
    //     data = d;
    // }
};
class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }

    Node *nodeExist(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
                temp = ptr;

            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node *n)
    {
        
        if (nodeExist(n->key) == NULL)
        {
            if (head == NULL)
            {
                head = n;
                return;
            }
            else if(head->next==NULL){
                head->next=n;
                return;
            }
           
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                  
                }
                    ptr->next = n;
                    cout << "NODE APPEND" << endl;
                
            
        }
        else
            cout << "KEY ALREADY EXIST";
    }

    void prependNode(Node *n)
    {
        if (nodeExist(n->key) == NULL)
        {
            if (head == NULL)
            {
                head = n;
                cout << "NODE PEPEND" << endl;
            }
            else
            {
                n->next = head;
                head = n;
                cout << "NODE PEPEND" << endl;
            }
        }
        else
            cout << "node already exist" << endl;
    }

    void inputNumber(int k, Node *n)
    {
        Node *ptr = nodeExist(k);
        if (ptr == NULL)
        {
            cout << "Key not exist" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "NODE insert" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "NODE insert" << endl;
            }
        }
    }
    void deleteNode(int k)
    {
        Node *ptr = nodeExist(k);
        if (ptr == NULL)
        {
            cout << "node not exist" << endl;
        }
        else
        {
            if (head->next == NULL)
            {
                head = NULL;
            }
            else
            {
                Node *prevptr = head;
                while (prevptr->next != ptr)
                {
                    prevptr = prevptr->next;
                }
                prevptr->next = ptr->next;
            }
        }
    }

    void printNode()
    {
        if (head == NULL)
            cout << "no node" << endl;
        else
        {
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << endl;
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    int option, key1, data1;
    SinglyLinkedList s;
    do
    {
        Node *n1 = new Node();
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "enter key" << endl;
            cin >> key1;
            cout << "enter data" << endl;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout << "enter key";
            cin >> key1;
            cout << "enter data" << endl;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            s.printNode();
            break;
        }
    } while (option!=0);

    return 0;
}