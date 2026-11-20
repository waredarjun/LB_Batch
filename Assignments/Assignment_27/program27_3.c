#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name   : Difference
//      Description     : Returns the difference between the
//                        frequency of small and capital letters.
//      Input           : String
//      Output          : Difference between both frequencies
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
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

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}