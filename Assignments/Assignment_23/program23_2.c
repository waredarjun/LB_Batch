#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   struprx
//      Description     :   Convert string into uppercase
//      Input           :   String
//      Output          :   Modified string in uppercase
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}