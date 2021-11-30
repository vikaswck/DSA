#include <iostream>
using namespace std;
void merge(int *ar, int l, int m, int r)
{
    int R = m - l + 1;
    int L = r - m;
    int arr[R], al[L];
    for (int i = 0; i < R; i++)
    {
        arr[i] = ar[i + l];
    }
    for (int j = 0; j < L; j++)
    {
        al[j] = ar[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = 1;
    while (i < R && j < L)
    {
        if (arr[i] <= al[j])
        {
            ar[k] = arr[i];
            i++;
        }
        else
        {
            ar[k] = al[j];
            j++;
        }
        k++;
    }
    while (i < R)
    {
        ar[k] = arr[i];
        i++;
        k++;
    }
    while (j < L)
    {
        ar[k] = al[j];
        j++;
        k++;
    }
}
void mergesort(int *ar, int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r - 1) / 2;
    mergesort(ar, l, m);
    mergesort(ar, m + 1, r);
    merge(ar, l, m, r);
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "before sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "->" << ar[i];
    }
    cout << "\n";
    mergesort(ar, 0, n - 1);
    cout << "after sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "->" << ar[i];
    }
    cout << "\n";
}
