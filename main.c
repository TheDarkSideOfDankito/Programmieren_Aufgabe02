#include "io.h"
#include "math.h"


void task02();

int main() {

    task02();

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