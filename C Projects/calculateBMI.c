#include <stdio.h>
#include <math.h>

void calculateBMI(double heights[], double weights[], int size);

int main()
{
   
     double array1[5] = {1.68, 1.1, 2.2, 3.3, 4.4};
    double array2[5] = {59.2, 6.6, 7.7, 8.8, 9.9};

    calculateBMI(array1, array2, 5);

    return 0;
}


void calculateBMI(double heights[], double weights[], int size){

    

    for (int i = 0; i < size; i++){

        
        double finalBMI = weights[i]/pow(heights[i], 2);

        printf("Person %d's BMi = %.2lf\n", i, finalBMI);


    }


    
}