#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<50;i++){
        cout<<"cap: "<<v.capacity()<<endl;
        cout<<"size: "<<v.size()<<endl;
        v.push_back(i+1);
        cout<<v[i]<<endl;
    }
}