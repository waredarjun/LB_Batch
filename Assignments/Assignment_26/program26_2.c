#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Display
//      Description     :   Convert uppercase to lowercase and vice versa
//      Input           :   Character
//      Output          :   Converted character
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("%c\n", ch);
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}