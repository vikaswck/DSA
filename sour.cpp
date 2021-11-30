#include<iostream>
using namespace std;

class queque
{
    public:
        char arr[20];
        int rear;
        int front;

    // public:
    //    int rear=-1;
    //    int front=-1;
    queque()
    {
        rear=-1;
        front=-1;
        // for(int i=0;i<=20;i++)
        //     arr[i]="/0";
    }

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
            return true;
        else    
            return false;
    }
    
    void enqueue(char n)
    {
        if(isEmpty())
        {
            front=rear=0;
            arr[rear]=n;
        }
        else
        {
            rear++;
            arr[rear]=n;
        }
    }
    char dequeue()
    {
        if(isEmpty())
        {
            cout<<"empty";
            return 'o';
        }
        else
        {
            front++;
            return arr[front-1];
            
        }
    }

    void print()
    {
        front =0;
        while(front!=rear)
        {
            cout<<arr[front];
            front++;
        }
        cout<<"\n";
    }
    
 
};

int main()
{
    int n;
    char temp ='1',temp1;
    cin>>n;
    queque str1;
    queque str2;
    str1.enqueue(temp);
    
        
        temp1=temp;
        str2.enqueue(temp1);
        str1.enqueue(temp +'0');
        str1.print();
        str1.enqueue(temp +'1');
        temp=str1.dequeue();
        cout<<temp<<endl;



    
    str1.print();
    //str2.print();
}