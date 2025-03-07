#include <stdio.h>
#include <limits.h>

int main()
{
    int input_number;
    

    printf("Enter a number to find second smallest number: ");
    scanf("%d", &input_number);

    find_second_smallest_digit(input_number);

    return 0;
}


void find_second_smallest_digit(int input_number)
 {
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int digit_seen[10] = {0}; 

    
    while (input_number > 0)
     {
        int digit = input_number % 10;
        digit_seen[digit] = 1; 
        input_number /= 10;
    }

    
    for (int i = 0; i < 10; i++) 
    {
        if (digit_seen[i])
         {
            if (i < smallest)
             {
                second_smallest = smallest;
                smallest = i;
            } 
            else if (i < second_smallest)
             {
                second_smallest = i;
            }
        }
    }

   
    if (second_smallest == INT_MAX)
     {
        printf("No second smallest digit found.\n");
    } 
    else 
    {
        printf("Second smallest digit: %d\n", second_smallest);
    }
}

