#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////
//
//  Function Name: chkVowel
//  Description: fuction to check letter vowel or not 
//  Input : charector
//  Output : "string"
//  Author : Wared Arjun Ashok
//  Date : 12/11/2026
//  
///////////////////////////////////////////////
BOOL chkVowel(char cCharacter)
{
    if(cCharacter == 'a' || cCharacter == 'e' ||
       cCharacter == 'i' || cCharacter == 'o' ||
       cCharacter == 'u' ||
       cCharacter == 'A' || cCharacter == 'E' ||
       cCharacter == 'I' || cCharacter == 'O' ||
       cCharacter == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");

    scanf(" %c", &cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}