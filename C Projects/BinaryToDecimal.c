#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *convertBinaryToDeci(int binaryNum, int bitStringLength)
{
    if (binaryNum == 0) return 0;
    
    int decimalNum = 0;
    
    while (binaryNum > 0)
    {
        int binaryDigit = binaryNum % 10;
        
        if (binaryDigit == 1)
        {
            decimalNum += pow(2, bitStringLength);
        }
        
        binaryNum /= 10;
        bitStringLength--;
        
    }
    return decimalNum;
}

int main()
{
    printf("%d", convertBinaryToDeci(1011, 4));
    

    return 0;
}