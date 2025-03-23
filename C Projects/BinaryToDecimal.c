#include <stdio.h>
#include <string.h>
#include <math.h>

int convertBinaryStringToDeci(const char* binaryStr)
{
    int decimalNum = 0;
    int length = strlen(binaryStr);

    for (int i = length - 1, power = 0; i >= 0; i--, power++) {
        if (binaryStr[i] == '1') {
            decimalNum += pow(2, power);
        }
    }
    return decimalNum;
}

int main()
{
    const char* binaryStr = "01111"; 
    int decimalNum = convertBinaryStringToDeci(binaryStr);
    printf("\n\n%s (binary) = %d (decimal)", binaryStr, decimalNum);

    return 0;
}
