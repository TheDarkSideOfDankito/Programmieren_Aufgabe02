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

void readIntArray(int inputArray[], int arrayLength) {
    for(int i = 0; i < arrayLength; i++) {
        inputArray[i] = readIntFromCommandline();
    }
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

void readFloatMatrix(int countColumns, int countRows, float (*matrix)[countRows]) {
    for(int row = 0; row < countRows; row++) {
        for(int column = 0; column < countColumns; column++) {
            matrix[row][column] = readFloatFromCommandline();
        }
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

void printFloatMatrix(int countColumns, int countRows, float (*matrix)[countRows]) {
    for(int row = 0; row < countRows; row++) {
        for(int column = 0; column < countColumns; column++) {
            printFloat(matrix[row][column]);
            printString(" ");
        }

        println();
    }
}
