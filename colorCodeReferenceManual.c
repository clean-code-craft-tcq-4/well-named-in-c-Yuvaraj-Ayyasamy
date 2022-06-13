#include "colorCode_if.h"
#include "getColorCode.h"
#include "colorCodeReferenceManual.h"


void printColorCodeReferenceManual(void)
{
    int majorColorCount = 0;
    int minorColorCount = 0;
    int PairNumber = 1;

    printf("\n25 pair Color Code Reference manual \n");
    printf("\n---------------------------------------- \n");
    printf("Pair No.\t|Major Color \t|Minor Color|\n");
    printf("\n---------------------------------------- \n");
    for(majorColorCount = 0; majorColorCount < numberOfMajorColors; majorColorCount++)
    {
        for(minorColorCount = 0; minorColorCount < numberOfMinorColors; minorColorCount++)
        {
            printf("%d \t|\t%s \t|\t%s|\n",PairNumber++, majorColors[majorColorCount], minorColors[minorColorCount]);
        }
    }
}
