#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   strlwrx
//      Description     :   Convert string into lowercase
//      Input           :   String
//      Output          :   Modified string in lowercase
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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

    strlwrx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}