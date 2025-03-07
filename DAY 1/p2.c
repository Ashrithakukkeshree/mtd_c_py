#include <stdio.h>

int main()
{
    int intnum=0;
    puts("enter number");
    scanf("%d",&intnum);
    if (intnum % 2 == 0)
        printf ("\n%d is even\n\n" , intnum);
    else
        printf ("\n%d is not an even number\n\n",intnum);
    return 0;
}