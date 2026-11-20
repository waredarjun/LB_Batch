#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   strtogglex
//      Description     :   Toggle the case of each character
//      Input           :   String
//      Output          :   Modified string with toggled case
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}