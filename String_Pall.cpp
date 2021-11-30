#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool Pallidrome(string s){
    int len = floor(s.length()/2);
    string first = s.substr(-1,0);
    string last = s.substr(len+1,s.length()-1);
    cout<<first<<endl;
    cout<<last<<endl;
    if(first == last){
        return true;
    }else{
        return false;
    }
}
int main(){
    string s = "naman";
    cout<<Pallidrome(s)<<endl;

}