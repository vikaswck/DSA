#include<stdio.h>
int main()
{
    int n,i,item;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
      printf("enter the value of item\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
            break;
    }
 if(arr[i]==item)
   printf("no is found=%d",item);
            
  else
   printf("no is not found");
}