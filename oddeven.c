#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char str[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    if(b>9)
  	{for(int i=a;i<=9;i++)
      {
          printf("%s \n",str+(i-1));   
      }
      for(int j=10;j<=b;j++)
      {if(j%2==0)
      printf("even\n");
      else
      printf("odd\n");
      }}
      else
      for(int i=a;i<=b;i++)
      {
          printf("%s \n",str+(i-1));   
      }


    return 0;
}

