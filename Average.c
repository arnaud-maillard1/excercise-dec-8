/**
 * Présentation de l'exercice...
 * - Déclarer référentiel GitHub exercice (4min)
 * - Déclarer un tableau de 128 float 32-bits (5min) -> 13h30
 * - Remplir ce tableau avec des valeurs aléatoires 0..255 (10min)
 * - Identifier la valeur max. du tableau et la valeur min. puis afficher (5min)
 * - Normaliser ce tableau à 1.0 (10min)
 * - Afficher le tableau sur la sortie standard (5min) 
 **/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// Fill-in the array
void fill (float array[], size_t size){
    for (int i = 0; i < size; i++){
        array[i] = (float)rand()/RAND_MAX*255;
    }
}

// Identify the max value
float max (const float array[], size_t size){
    float max = FLT_MIN;
    for (int i = 0; i < size; i++){
        if (array[i] > max) max = array[i];
    }
    return max;
}

// Identify the min value
float min(const float array[], size_t size){
    float min = FLT_MAX;
    for (int i = 0; i < size; i++){
        if (array[i] < min) min = array[i];
    }
    return min;
}

// Noramlize the array with values between 0.0 and 1.0
void normalize (float array[], size_t size){
    float max_value = max(array, size);
    for(int i = 0; i < size; i++){
        array[i] = array[i]/max_value;
    }
}

// Display the values of the array
void display (const float array[], size_t size){
    for(int i = 0; i < size; i++){
        printf("%f\n", array[i]);
    }
}

int main (){
    // Initialize the array
    float array[128] = {0};
    const size_t size = sizeof(array) /  sizeof(array[0]);

    fill(array, size);
    normalize(array, size);
    display(array, size);
    
    // Display max and min value
    printf("Max = %f\n", max(array, size));
    printf("Min = %f\n", min(array, size));
    
}