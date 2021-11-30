#include<iostream>
using namespace std;
int f(int x,int *py,int **ppz){
    int y,z;
    x+=5;
    **ppz +=1;
    z = **ppz;
    *py += 2;
    y  = *py;
    return x;  
}
int main(){
    int c=4;
    int *a,**b;
    a=&c;
    b=&a;

    printf("%d",f(c,a,b));
    cout<<c;
    return 0;
    
}