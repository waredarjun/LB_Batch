#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name   : Reverse
//      Description     : Displays the string in reverse order.
//      Input           : String
//      Output          : Reversed string
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
void Reverse(char *str)
{
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    iLength--;

    while(iLength >= 0)
    {
        printf("%c", str[iLength]);
        iLength--;
    }

    printf("\n");
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

    Reverse(arr);

    return 0;
}