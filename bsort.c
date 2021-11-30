#include <stdio.h>
int *busort(int *arr, int n)
{
    int temp;
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    int *q;
    scanf("%d", &n);
    int arr[n];
    printf("enter array element\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarray(arr, n);
    q = busort(arr, n);
    printarray(q, n);
}
