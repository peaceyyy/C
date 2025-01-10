#include <stdio.h>

void RowsColumns(int rows, int columns, char symbol);

int main(){
   
    RowsColumns(9,9,'#');
    
    return 0;
}

void RowsColumns(int rows, int columns, char symbol){
    for(int i = 0; i < rows; i++){

        for(int j = 0; j < columns; j++) printf("%c", symbol);
    printf("\n");   

    }
}
