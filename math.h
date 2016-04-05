//
// Created by ganymed on 05/04/16.
//

#ifndef INC_02_MATH_H
#define INC_02_MATH_H


float calculateArithmeticMean(float array[], int arrayLength);

void findMaximumInFloatArray(float array[], int arrayLength, float* maximum, int* indexOfMaximum);


void calculateFrequenciesOfIntsFrom0To5(int inputArray[], int arrayLength, int frequencies[], int maxNumber);

// really, a very nice Syntax, C!
void multiplyFloatMatrices(int countColumns, int countRows, float (*inputMatrixA)[countRows], float (*inputMatrixB)[countRows], float (*resultMatrix)[countRows]);

float calculateSigmoid(float input);


#endif //INC_02_MATH_H
