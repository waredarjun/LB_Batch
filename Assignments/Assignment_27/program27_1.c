#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name   : CountCapital
//      Description     : Counts capital letters in a string.
//      Input           : String
//      Output          : Number of capital characters
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}