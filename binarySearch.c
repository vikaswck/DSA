#include <stdio.h>
void binarySearch(int *p, int high, int low, int no)
{
    int mid = (high + low) / 2;
    int n = high;
    for (int i = 0; i <= n; i++)
    {
        if (no == p[i])
        {
            printf("%d found at index %d \n",p[i],i);
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
    scanf("%d",&n);
    high = n - 1;
    low = 0;
    int arr[n];
    printf("enter the sorted array \n"); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the no you want to search \n");
    scanf("%d",&no);
    binarySearch(arr, high, low, no);
}