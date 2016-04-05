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
