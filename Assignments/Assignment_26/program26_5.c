#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name   : Display
//      Description     : Displays ASCII value in decimal,
//                        octal and hexadecimal formats.
//      Input           : Character
//      Output          : Decimal, octal and hexadecimal values
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
void Display(char ch)
{
    printf("Decimal       : %d\n", ch);
    printf("Octal         : 0%o\n", ch);
    printf("Hexadecimal   : 0x%X\n", ch);
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}