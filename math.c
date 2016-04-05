//
// Created by ganymed on 05/04/16.
//

#include "math.h"



float calculateArithmeticMean(float array[], int arrayLength) {
    float arithmeticMean = 0;

    for(int i = 0; i < arrayLength; i++) {
        arithmeticMean += array[i];
    }

    arithmeticMean = arithmeticMean / arrayLength;

    return arithmeticMean;
}


void findMaximumInFloatArray(float array[], int arrayLength, float* maximum, int* indexOfMaximum) {
    if(arrayLength == 0) {
        *maximum = 0;
        *indexOfMaximum = -1;
        return;
    }

    *maximum = array[0];
    *indexOfMaximum = 0;

    for(int i = 1; i < arrayLength; i++) {
        if(array[i] > *maximum) {
            *maximum = array[i];
            *indexOfMaximum = i;
        }
    }
}
