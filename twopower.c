#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
i=N;
while(i>2)
    {
      
       i=i/2;
       
    }
if(i==2)
    printf("%d is a number that can be expressed as power of 2.",N);
  
else
  
    printf("%d cannot be expressed as power of 2.",N);
}