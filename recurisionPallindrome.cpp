#include <iostream>
using namespace std;
bool pallindrome(string str,int start,int end)
{
    if (start>=end)
    {
        return true;
    }
        return str[start] == str[end] && pallindrome(str,start+1,end-1);

}
int main()
{
    string s = "llnamanll";
    int n = s.size();
    cout << pallindrome(s,0,n-1) << endl;
}