#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[]={'a','b','c','d'};
    char *pc=&c[0];
    int *p=(int *)pc;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;
    return 0;
}