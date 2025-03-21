#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *convertDeciToBinary(int decimalNum, int *bitstringLength)
{
    if (decimalNum == 0)
    {
        int *binaryNumber = malloc(sizeof(int));
        binaryNumber[0] = 0;
        *bitstringLength = 1;
        return binaryNumber;
    }

    int numBits = (int)log2(decimalNum) + 1;
    int *binaryNumber = malloc(sizeof(int) * numBits);
    int i = 0;
    while (decimalNum > 0)
    {
        binaryNumber[i++] = decimalNum % 2;
        decimalNum /= 2;
    }

    for (int j = 0; j < i / 2; j++)
    {
        int temp = binaryNumber[j];
        binaryNumber[j] = binaryNumber[i - j - 1];
        binaryNumber[i - j - 1] = temp;
    }

    *bitstringLength = i;
    return binaryNumber;
}

int main()
{
    int bitstringlength;
    int testCases[] = {0, 1, 2, 37, 255, 1023, 2147483647};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++)
    {
        int *binaryRepresentation = convertDeciToBinary(testCases[i], &bitstringlength);
        printf("Decimal: %d -> Binary: ", testCases[i]);
        for (int j = 0; j < bitstringlength; j++)
        {
            printf("%d", binaryRepresentation[j]);
        }
        printf("\n");
        free(binaryRepresentation);
    }

    return 0;
}