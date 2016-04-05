#include "io.h"
#include "math.h"


void task02();
void task03();


int main() {

    //task02();
    task03();

    return 0;
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