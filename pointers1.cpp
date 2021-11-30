#include<iostream>
using namespace std;
//v//oid pointer(int *q){
    //cout<<"q="<<*q<<"\n";
//}
int main()
{
    int t[10];
    int *p=&t[0];
    t[0]=4;
    t[1]=7;
    cout<<*p<<endl;
    *p=*p+1;
    cout<<*p<<endl;
     //pointer(&t);
/*\*int i;
std::cin>>i;
int *p=&i;
std::cout<<p<<"\n";
std::cout<<i<<"\n";
std::cout<<&p<<"\n";
int o=123;
std::cout<<*(&o)<<"\n";*/
}