/*
        input   :   5
        output  :   1   2   3   4   5
*/
/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

////////////////////////////////////////////////////////////////
//
//
//      Step1   :   write a program which accept number from user and print number till that number.
//  
//
////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    initially i created a variable for getting user input which is regular variable "iValue"
                    then i create a function name is "Display" and use loop and write a logic for printing natural number upto user input
                    
                    
            
*/  
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//      Step 3  :   Decide the programming language
//                  We select C programming 
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//      Step 4  :   Write the program
//        
//  
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Disply
//      Description     :   print natural number uoto input                      
//      Input           :   integer
//      Output          :   special symbol
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Display (int iNo)
{
    int iCnt = 0; //function veriable initial value
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    if(scanf("%d",&iValue)!=1)
    {
        printf("Charector not valid");
    }

    Display(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////
//
//
//      Step 5:Test the Program
//  
//      Tested test Cases
//      ----------------------------------------
//      Input       output       
//      ------------------------------------------
//      5           12345
//      3           123
//      -3          -
//      Abcd        character not valid
//
//
////////////////////////////////////////////////////////////////