/*
        input   :   5
        output  :   5   10  15  20  25 
*/
/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

///////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step1   :   write a program which accept N and print first 5 multiples of N number.
//  
//
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    initially i created a variable for getting user input which is regular variable "iValue"
                    create function "MultipleDisplay" and apply lofic inside functio                           
*/  
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////

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
//      Function Name   :   Display
//      Description     :   print first 5 multiple of N                      
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void MultipleDisplay (int iNo)
{
    int iCnt = 0; //function veriable initial value

    if(iNo<0) //filter -ve value
    {
        iNo = - iNo;
    }
    
    for(iCnt = 1; iCnt <= 5; iCnt++)   //buisness logic
    {
        printf("%d\t",iCnt*iNo);
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
    if(scanf("%d",&iValue)!=1)  //avoid charector
    {
        printf("Charector not valid");
    }

    MultipleDisplay(iValue); 

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
//      5           5   10  15  20  25  
//      3           3   6   9   12  15
//      -3          3   6   9   12  15
//      Abcd        character not valid
//
//
////////////////////////////////////////////////////////////////