#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   DisplaySchedule
//      Description     :   Display exam timing based on division
//      Input           :   Division character
//      Output          :   Exam timing
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid division\n");
            break;
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}