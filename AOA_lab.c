#include <stdio.h>
#include<stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    
    i = 0; 
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void binarySearch(int *p, int high, int low, int no)
{
    int mid = (high + low) / 2;
    int n = high;
    for (int i = 0; i <= n; i++)
    {
        if (no == p[i])
        {
            printf("%d found at index %d \n", p[i], i);
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
}
void main()
{
    int n, high, low, mid, no;
    printf("enter the size of array \n");
    scanf("%d", &n);
    high = n - 1;
    low = 0;
    int arr[n];
    
    printf("enter the elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr,low,high);
    printf("enter the no you want to search \n");
    scanf("%d", &no);
    print(arr,n);
    binarySearch(arr, high, low, no);
    printf("Vikas kumar prasad \n 19ESKCS862");   
}