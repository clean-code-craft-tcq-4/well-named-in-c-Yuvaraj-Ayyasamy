#include "colorCode_if.h"

const char* majorColors[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColors[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMajorColors = sizeof(majorColors) / sizeof(majorColors[0]);
int numberOfMinorColors = sizeof(minorColors) / sizeof(minorColors[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",majorColors[colorPair->majorColor],minorColors[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
