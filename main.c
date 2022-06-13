#include "colorCode_if.h"
//#include "getColorCode.h"
//#include "colorCodeTest.h"
//#include "colorCodeReferenceManual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printColorCodeReferenceManual();
    
    return 0;
}
