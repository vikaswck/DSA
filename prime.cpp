#include<iostream>
using namespace std;
int main(){
   /* int n,i=2;
    cin>>n;
    while(n%i!=0){
       if(i==n/2)
       break;
       else
       i++;
        
    }
    if(i==n/2)
    cout<<"prime no"<<endl;
    else
    cout<<"not prime no"<<endl;*/
    int n;
    cin>>n;
    if(n==1){
    cout<<"not prime"<<endl;
    return 0;
    }
    if(n==2||n==3){
        cout << " prime "<<endl;
        return 0;
    }
        if (n % 2 == 0 || n % 3 == 0){
            cout << "not prime"<<endl;
            return 0;
        }
        for (int i = 5; i * i < n; i = i + 6)
        {
            if (n % i == 0 || n % (i + 2) == 0){
                cout << "not prime  "<<endl;
                return 0;
            }
        }
        cout<<"prime"<<endl;
        return 0;
}