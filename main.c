#include "io.h"
#include "math.h"


void task01_CalculateMatrixProduct();
void task02();
void task03();
void task04();


int main() {

    //task01_CalculateMatrixProduct();
    //task02();
    //task03();
    task04();

    return 0;
}


void task01_CalculateMatrixProduct() {

}

void task02() {
    int arrayLength = printTextAndReadIntFromCommandline("Wie viele Zahlen möchten Sie eingeben?");

    float inputArray[arrayLength];

    printlnString("Bitte Zahlen eingeben:");
    readFloatArray(inputArray, arrayLength);

    float arithmeticMean = calculateArithmeticMean(inputArray, arrayLength);

    printString("Das arithmetische Mittel betraegt ");
    printFloat(arithmeticMean);
    printlnString(".");
}


void task03() {
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


void task04() {
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