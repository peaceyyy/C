#include <stdio.h>

void sortArrayAscending (int array[], int size)
{
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
    }
}

void sortArrayDescending (int array[], int size)
{
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            
            if(array[j] < array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            } 
        }
    }
}

void printArray (int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("\n");
    
    
}
int main(){

    int array[] = {9,0,1,2,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    sortArrayAscending(array, size);
    printArray(array, size);

    sortArrayDescending(array, size);
    printArray(array, size);
    
    return 0;
}