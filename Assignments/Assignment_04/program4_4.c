/*check voting eligibility*/
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////
//
//  Function Name   : CheckVotingEligibility
//  Description     : check user is eligible 
//                    for voting or not 
//  Input           : Integer
//  Output          : string
//  Author          : Wared Arjun Ashok
//  Date            : 12/11/2026
//  
///////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge>18)
    {
        printf("Eligible");
    }
    else if (iAge<=18)
    {
        printf("not eligible");
    }
    else
    {
        printf("invalid age");
    }
}
int main()
{
    int iAge = 0;
    printf("enter your age : ");
    scanf("%d",&iAge);



    return EXIT_SUCCESS;
}