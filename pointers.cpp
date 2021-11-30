#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    (*p)++;
    cout<<i<<endl;
    (*p)++;
    cout<<*p<<endl;
    *p=*p+1;
    cout<<*p<<endl;
    cout<<i<<endl;
    *p=(*p)+1;
    cout<<*p<<endl;
    cout<<i<<endl;
    (*p)++;
    cout<<*p<<endl;
    cout<<i<<endl;
     //*p++;
     //cout<<i<<endl;
     //cout<<*p<<endl; 
      (*p)=(*p)+1;
    cout<<i<<endl;
     (*p)=*p+1;
     cout<<i<<endl;

    return 0;


}