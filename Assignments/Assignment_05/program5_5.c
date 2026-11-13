
/* Identify Character Type */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
////////////////////////////////////////////////
//  
//  Function Name   :   CheckCharacterType
//  Description     :   Function for checking input
//                      is upper case,lower case, 
//                      digit or any special charector
//  Input           :   Integer or char                       
//  Output          :   String                    
//  Author          :   Arjun Ashok Wared                    
//  Date            :   13/11/2026
//
/////////////////////////////////////////////////
void CheckCharacterType(char cValue[])
{
    int i = 0;

    if(cValue[0] == '-')
    {
        i = 1;
    }

    if(cValue[i] == '\0')
    {
        printf("Invalid input");
        return;
    }

    while(cValue[i] != '\0')
    {
        if(!isdigit(cValue[i]))
        {
            if(cValue[i] >= 'A' && cValue[i] <= 'Z')
            {
                printf("%s is Upper case",cValue);
            }
            else if(cValue[i] >= 'a' && cValue[i] <= 'z')
            {
                printf("%s is lower case",cValue);
            }
            else
            {
                printf("%s is special character",cValue);
            }
            return;
        }
        i++;
    }

    printf("%s is digit",cValue);
}

int main()
{
    char cValue[20] = {'\0'};

    printf("Enter a character : ");
    scanf("%19s",cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
