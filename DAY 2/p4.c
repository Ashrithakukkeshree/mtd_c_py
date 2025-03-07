#include <stdio.h>

int main() {
    int num, i=1;

    printf("Enter a number for MULTIPLICATION: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %02d = %03d\n", num, i, num * i);
    }

    return 0;
}
