#include <stdio.h>
#include <stdlib.h>
#include <float.h>
// void fill (float array[]){

// }

// void display_min_max (const float array[]){
//     printf("Max = %f\n", );
//     printf("Min = %f\n", );
// }

int main (){
    // Initialise the array
    float array[128] = {0};
    const size_t size = sizeof(array) /  sizeof(array[0]);

    // Fill-in the array
    float max = FLT_MIN, min = FLT_MAX;
    for (int i = 0; i < size; i++){
        array[i] = (float)rand()/RAND_MAX*255;
    }

    // Identify the max and min value
    for (int i = 0; i < size; i++){
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    
    // Normalize
    for(int i = 0; i < size; i++){
        array[i] = (array[i]/max);
        printf("%f\n", array[i]);
    }

    // Identify the max and min value
    max = FLT_MIN, min = FLT_MAX;
    for (int i = 0; i < size; i++){
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }

    // Display max and min value
    printf("Max = %f\n", max);
    printf("Min = %f\n", min);
    
}