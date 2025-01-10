#include <stdio.h>

int main()
{
    int num = 1, sumOfOdd = 0, sumOfEven = 0;

    while (num != 0)
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);
     

    if (num < 0)
        {

            if (num % 2 == 0)
            {
                sumOfOdd += (-num);
            }
            else
            {
                sumOfEven += (-num);
            }

        }

        else
        {
           if (num % 2 == 0)
            {
                sumOfEven += num;
            }
            else
            {
                sumOfOdd += num;
            } 
        }

        printf("\nSum of even numbers: %d", sumOfEven);
        printf("\nSum of odd numbers: %d\n", sumOfOdd);
        printf("---");
    }

    printf("\n    *** End of program ***");
    return 0;
}
