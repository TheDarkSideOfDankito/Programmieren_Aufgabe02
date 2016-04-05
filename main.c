#include "io.h"
#include "math.h"
#include "date.h"


void task01_CalculateMatrixProduct();
void task02_CalculateArithmeticMean();
void task03_CalculateMaximum();
void task04_Histogram();
void task05_readAndPrintDateStruct();
void task06_SigmoidFunction();


int main() {

    //task01_CalculateMatrixProduct();
    //task02_CalculateArithmeticMean();
    //task03_CalculateMaximum();
    //task04_Histogram();
    //task05_readAndPrintDateStruct();
    task06_SigmoidFunction();

    return 0;
}


void task01_CalculateMatrixProduct() {
    int countColumns = 2;
    int countRows = 2;
    float inputMatrixA[countRows][countColumns];
    float inputMatrixB[countRows][countColumns];

    readFloatMatrix(countColumns, countRows, inputMatrixA);
    readFloatMatrix(countColumns, countRows, inputMatrixB);

    float result[countRows][countColumns];
    multiplyFloatMatrices(countColumns, countRows, inputMatrixA, inputMatrixB, result);

    printFloatMatrix(countColumns, countRows, result);
}

void task02_CalculateArithmeticMean() {
    int arrayLength = printTextAndReadIntFromCommandline("Wie viele Zahlen möchten Sie eingeben?");

    float inputArray[arrayLength];

    printlnString("Bitte Zahlen eingeben:");
    readFloatArray(inputArray, arrayLength);

    float arithmeticMean = calculateArithmeticMean(inputArray, arrayLength);

    printString("Das arithmetische Mittel betraegt ");
    printFloat(arithmeticMean);
    printlnString(".");
}


void task03_CalculateMaximum() {
    int arrayLength = printTextAndReadIntFromCommandline("Wie viele Zahlen möchten Sie eingeben?");

    float inputArray[arrayLength];

    printlnString("Bitte Zahlen eingeben:");
    readFloatArray(inputArray, arrayLength);

    float maximum;
    int indexOfMaximum;
    findMaximumInFloatArray(inputArray, arrayLength, &maximum, &indexOfMaximum);

    printString("Das Maximum liegt bei A[");
    printInt(indexOfMaximum);
    printString("]=");
    printFloat(maximum);
    printlnString(".");
}


void task04_Histogram() {
    int arrayLength = 10;
    int inputArray[arrayLength];

    readIntArray(inputArray, arrayLength);

    int maxNumber = 5;
    int frequencies[maxNumber + 1];
    calculateFrequenciesOfIntsFrom0To5(inputArray, arrayLength, frequencies, maxNumber);

    printlnString("Haeufigkeiten:");
    for(int i = 0; i <= maxNumber; i++) {
        printInt(i);
        printString(": ");
        printInt(frequencies[i]);
        printlnString(" mal");
    }
}


void task05_readAndPrintDateStruct() {
    Date date;

    date.day = readIntFromCommandline();
    date.month = readIntFromCommandline();
    date.year = readIntFromCommandline();

    printString("Das Datum ist der ");
    printInt(date.day);
    printString(".");
    printInt(date.month);
    printString(".");
    printInt(date.year);
    printlnString(".");
}


void task06_SigmoidFunction() {
    int countNumbers = 11;
    float numbersToCalculateSigmoidFunctionFor[] = { 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1 };

    for(int i = 0; i < countNumbers; i++) {
        float number = numbersToCalculateSigmoidFunctionFor[i];

        printFloat(number);
        printString(" : ");
        printlnFloat_LimitDecimalPlaces(calculateSigmoid(number), 4);
    }
}