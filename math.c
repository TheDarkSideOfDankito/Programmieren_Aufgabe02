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


void calculateFrequenciesOfIntsFrom0To5(int inputArray[], int arrayLength, int frequencies[], int maxNumber) {
    for(int i = 0; i <= maxNumber; i++) {
        frequencies[i] = 0;
    }

    for(int i = 0; i < arrayLength; i++) {
        frequencies[inputArray[i]] = frequencies[inputArray[i]] + 1;
    }
}


void multiplyFloatMatrices(int countColumns, int countRows, float (*inputMatrixA)[countRows], float (*inputMatrixB)[countRows], float (*resultMatrix)[countRows]) {
    float sum = 0;

    for(int row = 0; row < countRows; row++) {
        for(int column = 0; column < countColumns; column++) {
            for (int k = 0; k < countColumns; k++) {
                sum = sum + inputMatrixA[row][k] * inputMatrixB[k][column];
            }

            resultMatrix[row][column] = sum;
            sum = 0;
        }
    }
}
