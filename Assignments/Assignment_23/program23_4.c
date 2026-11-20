#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   DisplayDigit
//      Description     :   Display only digits from a string
//      Input           :   String
//      Output          :   Digits from the given string
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
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

    printf("Digits from string are: ");
    DisplayDigit(arr);

    printf("\n");

    return 0;
}