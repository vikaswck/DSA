#include<bits/stdc++.h>
using namespace std;
class polynomial
{
    int *coff;
    int capacity;
    int index;
    public:
        polynomial(){
            coff = new int[5];
            index = 0;
            capacity = 5;
        }
        void add(int coff,int i){
            if(i>index){
                
            }
            this->coff[i]=coff;            
        }
        void print(){
            for(int i=0;i<index;i++){
                cout<<coff[i]<<"X^"<<i<<" ";
            }
            cout<<endl;
        }
};