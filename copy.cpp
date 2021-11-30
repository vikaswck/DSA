#include <bits/stdc++.h>
using namespace std;
int find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                                         find(decimal_number / 2));
}

int main()
{
    int even = 0,odd = 0;
    int decimal_number = 10;
    int v = find(decimal_number);
    while(v<=0){
        int d = v%10;
        if(d%2==0){
            even++;
        }
        v = v/10;
    }
    if(even%2==0){
        cout<<"even parity"; 
    }else{
        cout<<"odd parity";
    }

    return 0;
}

