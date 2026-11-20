#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
//      Function Name   : Display
//      Description     : Displays characters from the given
//                        character up to Z or z.
//      Input           : Character
//      Output          : Displays characters
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cValue = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cValue = ch; cValue <= 'Z'; cValue++)
        {
            printf("%c\t", cValue);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cValue = ch; cValue <= 'z'; cValue++)
        {
            printf("%c\t", cValue);
        }
    }
    else
    {
        return;
    }
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