#include<iostream>
using namespace std;
int main(){
    int hh,mm,ss;
    cin>>hh;
    cin>>mm;
   // cin>>ss;
    int tt = mm/5;
    hh += tt * 0.4;
    int rr = hh - tt;
    cout<<rr*5*6<<".00"<<endl;
}