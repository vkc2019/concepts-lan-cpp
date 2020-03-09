#include <iostream>

/*
char                1 byte          - 128 to 127    or  0 to 255
unsigned char       1 byte          0 to 255
signed char         1 byte          - 128 to 127
int                 2 or 4 bytes    - 32,768 to 32,767 or -2,147,483,648 to 2,147,483 647
unsigned int        2 or 4 bytes    0 to 65,535 or 0 to 4,294,967,295
short               2 bytes         - 32,768 to 32,767
unsigned short      2 bytes         0 to 65,535
long                8 bytes         - 9223372036854775808 to 9223372036854775807
unsigned long       8 bytes         0 to 18446744073709551615
*/

void infiniteLoopSignedInt()
{
    int i = 0; // should be unsigned by default it can be signed int hat case it will start from -128 to 127
    for (; i < 65535; i++)
    {
        printf("%d\n", i);
    }
}

void infiniteLoopSignedChar()
{
    char ch = 0; // should be unsigned by default it can be signed char hat case it will start from -32,768 to 32,768
    for (; ch < 255; ch++)
    {
        printf("%d\n", ch);
    }
}

int main()
{
    infiniteLoopSignedChar();
    infiniteLoopSignedInt();
}