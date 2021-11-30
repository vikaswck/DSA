#include<iostream>
using namespace std;
int sum(int n,int k){
    if(n<=0){
        return k;
    }
    return sum(n/10,k+n%10);
}
int main(){
    cout<<sum(2345,0);
}