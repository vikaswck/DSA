#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int** p=new int*[m];
    for ( i = 0; i <m; i++)
    {
        p[i]=new int[n];
        for ( j= 0; j < n; j++)
        {
            cin>>p[i][j];
        }
         
    } 
     for ( i = 0; i <m; i++)
    {
    
        for ( j = 0; j < n; j++)
        {
            cout<<p[i][j]<<" ";
        }   
        cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
        delete[] p[i];
    }
    delete[]p;
}