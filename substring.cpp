#include<iostream>
#include<string>
using namespace std;
int SubString(string input,string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutput = SubString(smallString,output);
    for(int i=0;i<smallOutput;i++){
        output[i+smallOutput] = input[0] + output[i];
    }
    return 2*smallOutput;

}
int main(){
    string input;
    cin>>input;
    string output[1000];
    int count = SubString(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}