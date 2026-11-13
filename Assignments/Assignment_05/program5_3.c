/*calculate student grade*/
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//  
//  Function Name   :   DisplayGrade
//  Description     :   Calculate mark and Disply Grade
//  Input           :   Integer                     
//  Output          :   String                    
//  Author          :   Arjun Ashok Wared                    
//  Date            :   13/11/2026
//
/////////////////////////////////////////////////
void DisplayGrade(float fMark)
{
    if(fMark<0 || fMark > 100)
    {
        printf("Invalid mmark");
    }
    else if (fMark>=90)
    {
        printf("Grade A");
    }
    else if (fMark>=75)
    {
        printf("Grade B");
    }
    else if (fMark>=60)
    {
        printf("Grade C");
    }
    else if (fMark>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    
}
int main()
{
    float fMark = 0.0f;

    printf("Enter mark: ");
    scanf("%f",&fMark);

    DisplayGrade(fMark);


}