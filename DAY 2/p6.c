#include <stdio.h>
int sum;

int reduce_to_single_digit(int inputnumber) 
{
    while (inputnumber >= 10) 
    {  
        while (inputnumber > 0) 
        {
            sum += inputnumber % 10;  
            num /= 10;        
        }
        inputnumber = sum;  
    }
    return input;
}

int main() 
{
    int num;
    
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

   
    if (num >= 1000 || num <= 9999) 
    {
        int result = reduce_to_single_digit(num);
        printf("Reduced single-digit number: %d\n", result);
    } else 
    {
        printf("Please enter a valid 4-digit number.\n");
    }

    return 0;
}
