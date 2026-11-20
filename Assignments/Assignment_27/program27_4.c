#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////
//
//      Function Name   : ChkVowel
//      Description     : Checks whether the string contains
//                        any vowel or not.
//      Input           : String
//      Output          : true or false
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return true;
        }

        str++;
    }

    return false;
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    char arr[100];
    bool bRet = false;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}