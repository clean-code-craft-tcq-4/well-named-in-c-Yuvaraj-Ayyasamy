#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const char* majorColors[];
const char* minorColors[];
int numberOfMajorColors;
int numberOfMinorColors;


void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void printColorCodeReferenceManual(void);
