#include<iostream>
#include<ctype>
using namespace std;
int main(){
    string s;
    int scount = 0,lcount = 0;
    getline(cin,s);
    for(int i=0;i<n;i++){
        if(97<=int(s[i])<=122){
             scount++;
        }
        else{
            lcount++;
        }
    }
    if(scount>=lcount){
        cout<<tolower(s);
    }
    else{
        cout<<toupper(s);
    }
}