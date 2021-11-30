#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c);
    if(a+b<c&&a+c<b&&b+c<a)
  printf("Triangle is not possible");
if(a==b==c)
  printf("Equilateral Triangle");
if(a==b||b==c||c==a)
  printf("Isosceles Triangle");
if(a^2+b^2==c^2||a^2+c^2==b^2||c^2+b^2==a^2)
  printf("Right-angle Triangle");
else
  printf("Scalene Triangle");
}
