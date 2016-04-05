//
// Created by ganymed on 05/04/16.
//

#include "io.h"

#include <stdio.h>


/*      Input       */


int readIntFromCommandline() {
    int input;
    scanf("%d", &input);

    return input;
}

int printTextAndReadIntFromCommandline(char* text) {
    printlnString(text);

    return readIntFromCommandline();
}


float readFloatFromCommandline() {
    float input;
    scanf("%f", &input);

    return input;
}

void readFloatArray(float inputArray[], int arrayLength) {
    for(int i = 0; i < arrayLength; i++) {
        inputArray[i] = readFloatFromCommandline();
    }
}


/*      Output      */


void println() {
    printf("\r\n");
}


void printString(char* output) {
    printf("%s", output);
}

void printlnString(char* output) {
    printString(output);
    println();
}


// oh C, you're really an old, old language! no method / function overloading
void printInt(int output) {
    printf("%d", output);
}

void printlnInt(int output) {
    printInt(output);
    println();
}

/*
void printIntMatrix(int** inputMatrix, int countColumns, int countRows) {
    for(int row = 0; row < countRows ; row++) {
        for (int column = 0; column < countColumns; column++) {
            printf("%d ", inputMatrix[row][column]);
        }

        printf("\r\n");
    }
}
 */


void printFloat(float output) {
    printf("%f", output);
}

void printlnFloat(float output) {
    printFloat(output);
    println();
}

void printFloatArray(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }

    printf("\r\n");
}
