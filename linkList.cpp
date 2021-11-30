#include <iostream>
using namespace std;
#include"pair.cpp"


node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *last = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = last = newnode;
        }
        else
        {
            last->next = newnode;
            last = newnode;
        }
        cin >> data;
    }
    return head;
}
node *Insertion(node *head, int i, int data)
{
    if (i < 0)
    {
        cout << "insertion at this place not possible" << endl;
        return 0;
    }
    if (i == 0)
    {
        node *newnode = new node(data);
        newnode->next = head;
        return newnode;
    }
    node *newnode = new node(data);
    node *temp = head;
    int count = 0;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}
node *Delete(node *head, int i)
{
    if (i == 0)
    {
        head = head->next;
        return head;
    }
    else
    {
        node *temp = head;
        int count = 0;
        while (temp != NULL && count < i - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {
            temp->next = temp->next->next;
        }
    }
    return head;
}
int countNode(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
    void mid_val(node * head)
    {
        int count = countNode(head);
        // node *temp = head;
        // while (temp != NULL)
        // {
        //     temp = temp->next;
        //     count++;
        // }
        node *fast = head->next;
        node *slow = head;
        if (count % 2 == 1)
        {
            while (fast != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        else
        {
            while (fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        cout << slow->data << endl;
    }

// pai reverse_1(node* head){
//     if (head == NULL || head->next == NULL)
//     {
//         pai ans;
//         ans.head = head;
//         ans.tail = head;
//         return ans;
//     }
//    pai smallans = reverse_1(head->next);
//    smallans.tail->next = head;
//    head->next = NULL;
//    pai ans;
//    ans.head = smallans.head;
//    ans.tail = head;
//    return ans;
// }
node* reverse(node* head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
   // node *smallans = reverse(head->next);
    node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    node *smallans = reverse(head->next);
    return smallans;
}
node *reverse_2(node* head){
    node* current = head;
    node* fast = head->next;
    node* previous = NULL; 
    while(current!= NULL){
        fast = current->next;
        current->next = previous;
        previous = current;
        current = fast;
    }
  return previous;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "-->" << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    cout << "enter the nodes of list" << endl;
    node *head = takeinput();
    print(head);
    int n;
    while(n!=-1){
        cout << "if don't want anything press -1" << endl;
        cout << "you want to insert a node  press 1 " << endl;
        cout << "if you want to delete an element press 0 " << endl;

        cin >> n;
       
        if (n == 1)
        {
            int i;
            cout << "enter the index at which you want to insert" << endl;
            cin >> i;
            int data;
            cout << "enter the value of data you want to insert" << endl;
            cin >> data;
            head = Insertion(head, i, data);
            print(head);
    }
    if (n == 0)
    {
        int i;
        cout << "enter the index at which you want to delete" << endl;
        cin >> i;
        head = Delete(head, i);
        print(head);
    }
    }
    cout << "mid value of list --> ";
    mid_val(head);
    node* temp;
   temp = reverse(head);
   cout<<"reverse list is: ";
   print(temp);
   cout<<"mid value of reverse list --> ";
   mid_val(temp);
   cout<<countNode(head)<<endl;
    // node n1(24);
    // node *head = &n1;
    // node n2(23);
    // node n3(22);
    // node n4(21);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // //cout<<&n2<<"\n"<<n1.next<<endl;
    // // cout<<n2.data;
    // print(head);
}