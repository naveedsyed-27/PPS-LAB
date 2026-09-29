#include <stdio.h>
int main()
{
    int a,b,Result;
     printf("Enter First Number:");
     scanf("%d",&a);

     printf("Enter Second Number:");
     scanf("%d",&b);

     Result=a&b;

     printf("Result=%d",Result);

     return 0;
}
