#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const char* MajorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMajorColors = sizeof(MajorColor) / sizeof(MajorColor[0]);
int numberOfMinorColors = sizeof(MinorColor) / sizeof(MinorColor[0]);


void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void printColorCodeReferenceManual(void);
