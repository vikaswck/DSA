#include <iostream>
using namespace std;
void binarySearch(int *p, int high, int low, int no)
{
    int mid = (high + low) / 2;
    int n = high;
    for (int i = 0; i < n; i++)
    {
        if (no == p[i])
        {
            cout << p[i] << " at index " << i << endl;
            return;
        }
        else if (p[i] < no)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    //return 0;
}
int main()
{
    int n, high, low, mid, q, no;
    cin >> n;
    high = n - 1;
    low = 0;
    int arr[n];
    cout<<"enter the sorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the no you want to search" << endl;
    cin >> no;

    int *p;
    p = arr;
    binarySearch(p, high, low, no);
}