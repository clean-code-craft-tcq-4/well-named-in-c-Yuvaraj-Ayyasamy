#include "colorCodeDefines.h"
#include "colorCodeTranslate.h"
#include "colorCodeReferenceManual.h"


void printColorCodeReferenceManual(void)
{
    int majorColorCount = 0;
    int minorColorCount = 0;
    int PairNumber = 1;

    printf("\n25 pair Color Code Reference manual \n");
    printf("Pair No.\tMajor Color \tMinor Color\n\n");
    for(majorColorCount = 0; majorColorCount < numberOfMajorColors; majorColorCount++)
    {
        for(minorColorCount = 0; minorColorCount < numberOfMinorColors; minorColorCount++)
        {
            printf("%d \t\t%s \t\t%s\n",PairNumber++, MajorColorNames[majorColorCount], MinorColorNames[minorColorCount]);
        }
    }
}
