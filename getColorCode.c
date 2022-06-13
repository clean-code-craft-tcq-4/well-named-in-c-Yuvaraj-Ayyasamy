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

void printColorCodeReferenceManual(void)
{
    int majorColorIndex = 0;
    int minorColorIndex = 0;
    int PairNumber = 1;

    printf("\n25 pair Color Code Reference manual \n");
    printf("\n---------------------------------------- \n");
    printf("Pair No.\t|Major Color \t|Minor Color|\n");
    printf("\n---------------------------------------- \n");
    for(majorColorIndex = 0; majorColorIndex < numberOfMajorColors; majorColorIndex++)
    {
        for(minorColorIndex = 0; minorColorIndex < numberOfMinorColors; minorColorIndex++)
        {
            printf("%d \t|\t%s \t|\t%s|\n",PairNumber++, majorColors[majorColorIndex], minorColors[minorColorIndex]);
        }
    }
}
