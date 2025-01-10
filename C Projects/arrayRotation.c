#include <stdio.h>

void printArray(int[], int);

int main(){
    
    int arraySize, lastElement, k;
    
    printf("Enter size of array: ");
    scanf("%d", &arraySize);
    
    int numsArray[arraySize];
    
    printf("Enter elements of array: \n");
    
    for (int i = 0; i < arraySize; i++){
        
   
        scanf("%d", &numsArray[i]);
    }
    

    
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    
    for(int i = 0; i < k; i++){
        
        lastElement = numsArray[arraySize - 1];
        
        for (int j = arraySize - 1; j > 0; j--){
            
            numsArray[j] = numsArray[j - 1];
            
        }
        
        numsArray[0] = lastElement;
    }
    
    printf("Rotated array: ");
    printArray(numsArray, arraySize);
    

}

void printArray(int array[], int size){
    
    
    for (int i = 0; i < size; i++){
        
        printf("%d ", array[i]);
    }
}



