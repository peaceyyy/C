#include <stdlib.h>
#include <stdio.h>

int* threeGreatestNumbers (int** grid, int rows, int columns, int* returnSize);

int main(){

    int arr[3][3] = {{1, 3, 4}, 
                     {2, 10, 5}, 
                     {12, 2, 15}};

    int returnSize = 0;
    int *output;

   

    // printf("%d %d", arr[8*sizeof(int)], arr[2][2]);

    // output = threeGreatestNumbers(arr, 3, 3, &returnSize); 

}

int* threeGreatestNumbers (int** grid, int rows, int columns, int* returnSize){

    *returnSize = sizeof(int) * 3;
    int* output = (int*) malloc(*returnSize);

    realloc(output, 16); 
  


     


}