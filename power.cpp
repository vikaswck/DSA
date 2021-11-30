#include <iostream>
using namespace std;
int power(int a, int n)
{
    if (n == 1)
    {
        return a;
    }
    int smallans = power(a, n / 2);
    if (n % 2 == 1)
    {
        return a * smallans * smallans;
    }
    else
    {
        return smallans * smallans;
    }
}
int main()
{
    int a = 2;
    int n = 5;
    cout << power(a, n) << endl;
}