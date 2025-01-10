#include <stdio.h>

int binarySearch (int, int[], int);

int main(){

    int numArrays[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d is the index of k", binarySearch(8, numArrays, 10));

    return 0;
}

int binarySearch (int k, int numsArray[], int numsSize){

    int left = 0, right = numsSize - 1, middle;

    while (left <= right){

        middle = (left + right)/2;

        if (k == numsArray[middle]) return middle;
        else if (k > numsArray[middle]) left = middle + 1;
        else if (k < numsArray[middle]) right = middle - 1;
        else return -1;
        
    }
 
}