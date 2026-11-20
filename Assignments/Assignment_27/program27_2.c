#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name   : CountSmall
//      Description     : Counts lowercase characters in a string.
//      Input           : String
//      Output          : Number of lowercase characters
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}