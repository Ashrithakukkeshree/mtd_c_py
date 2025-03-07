#include <stdio.h>
int main()
{
    int average =0;
    puts ("enter a number to check avg:");
    scanf("%d",&average);
    if (average<0&&average<=49)
    puts("result is fail");
    else if (average>=50&&average<=79)
    puts("result is good");
    else if (average>=80&&average<=89)
    puts("result is above");
    else 
    puts("distintion");
}