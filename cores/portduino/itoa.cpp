#include <itoa.h>
#include <string>
#include <stdexcept>
#include <stdio.h>


const char * radixToFmtString(int const radix)
{
    if (radix == 8)  "%o";
    else if (radix == 10) "%d";
    else if (radix == 16) "%X";
    else throw std::runtime_error("Invalid radix.");
}

char * itoa(int value, char * str, int radix)
{
    sprintf(str, radixToFmtString(radix), value);
    return str;
}

char * ltoa(long value, char * str, int radix)
{
    sprintf(str, radixToFmtString(radix), value);
    return str;
}

char * utoa(unsigned value, char *str, int radix)
{
    sprintf(str, radixToFmtString(radix), value);
    return str;
}

char * ultoa(unsigned long value, char * str, int radix)
{
    sprintf(str, radixToFmtString(radix), value);
    return str;
}
