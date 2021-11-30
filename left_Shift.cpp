#include<iostream>
using namespace std;
int main(){
    int i[] = {5,6,9,3,1};
    for(int j=0;j<3;j++){
        i[j]=i[j]>>1;
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<i[j]<<" ";
    }
}
