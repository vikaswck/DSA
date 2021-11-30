#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int fun(int no,int a,int b,int c){
    if(no<0){
        return -1;
    }
    if(no==0){
        return 0;
    }
    int m = fun(no - a, a, b, c);
    int n = fun(no - b, a, b, c);
    int k = fun(no - c, a, b, c);
    int res = (m>n)?m>k?m:k:(n>k)?n:k

    if(res = -1){
        return -1;
    }
    if(res>0){
        return res+1;
    }
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<fun(n,a,b,c);
}