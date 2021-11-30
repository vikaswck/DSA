#include<iostream>
using namespace std;
int check(int p[],int m,int x)
{
    int i;
   if(p[0]==x)
   {
       return 0;
   }
    for( i=0;i<m;i++)
    {
    if(p[i]==x)
    {
       return i; 
    }
    else{
        int y=check(p+1,m-1,x);
    }
    }
    return i;

}
int main()
{
    
    int m,x;
    cout<<"enter the value of m"<<endl;
    cin>>m;
    cout<<"enter the value of x"<<endl;
    cin>>x;
     int *p=new int[m];
    for(int i=0;i<m;i++)
    {
        cout<<"enter p["<<i<<"]"<<endl;
        cin>>p[i];
    }
    int value=check(p,m,x);
    cout<<value<<endl;
    delete []p;
    return 0;

}