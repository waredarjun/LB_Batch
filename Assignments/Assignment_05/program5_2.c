/*check leap year*/
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////
//  
//  Function Name   :   CheckLeapYear
//  Description     :   Identifying Leap Year
//  Input           :   Integer                     
//  Output          :   String                    
//  Author          :   Arjun Ashok Wared                    
//  Date            :   13/11/2026
//
/////////////////////////////////////////////////
void CheckLeapYear(int iYear)
{
    if((iYear%400==0) || (iYear%4==0) && (iYear%100 != 0))
    {
        printf("%d is a leap year",iYear);
    }
    else
    {
        printf("%d is not a leap year",iYear);
    }
}
int main()
{
    int iYear = 0;
    printf("enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}