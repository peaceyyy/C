#include <stdio.h>

void twoSum(int, int[], int);

int main(){


    int arr[] = {1, 3, 4, 7, 8, 10}, arrSize = 6, targetSum;
    //           0  1  2  3  4   5
    twoSum(18, arr, arrSize);

    return 0;
}

void twoSum(int targetSum, int arr[], int size){

    int i = 0, j = size - 1;
    

    while (i < j){

        if (arr[i] + arr[j] == targetSum) break;
        else if (arr[i] + arr[j] > targetSum) j--;
        else i++;

    }

    if (i == j) printf("No two values in the array add up to the target sum");
    else printf("Value at index %d + value at index %d is equal to target sum %d", i, j, targetSum);

}