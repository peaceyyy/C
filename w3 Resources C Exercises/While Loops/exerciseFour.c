#include <stdio.h>

int main(){
    
    int num;
    int numsArray[100];        
    int hasDuplicate = 0;
    int index = 0;

      while (hasDuplicate != 1) {
        printf("\nInput a number: ");
        
        int readStatus = scanf("%d", &num);  

        if (readStatus != 1) {
            printf("Invalid input. Please enter a valid integer.\n");

            while (getchar() != '\n');
            continue;
        }

            for(int i = 0; i < index; i++){

                if(num == numsArray[i]){
                    hasDuplicate = 1;
                    printf("\nDuplicate number entered!\n");
                    break;
                }
            }   

        numsArray[index] = num;
        
        printf("%d: ", index);
        printf("%d", numsArray[index]);

        index++;
     
       
}

 return 0;

}