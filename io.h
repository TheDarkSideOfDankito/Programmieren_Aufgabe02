//
// Created by ganymed on 05/04/16.
//

#ifndef INC_02_IO_H
#define INC_02_IO_H


/*      Input       */

int readIntFromCommandline();

int printTextAndReadIntFromCommandline(char* text);


float readFloatFromCommandline();

void readFloatArray(float inputArray[], int arrayLength);


/*      Output      */

void println();


void printString(char* output);

void printlnString(char* output);


void printInt(int output);

void printlnInt(int output);

//void printIntMatrix(int* inputMatrix, int countColumns, int countRows);


void printFloat(float output);

void printlnFloat(float output);

void printFloatArray(int array[], int arrayLength);


#endif //INC_02_IO_H
