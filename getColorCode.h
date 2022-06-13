extern const char* majorColor[];
extern const char* minorColor[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
