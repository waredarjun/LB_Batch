#include <stdio.h>

/////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description: Convert case of the Charector 
//  Input : Charector
//  Output : Charector
//  Author : Wared Arjun Ashok
//  Date : 03/11/2026
//  
///////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32); // Converts uppercase to lowercase
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32); // Converts lowercase to uppercase
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}