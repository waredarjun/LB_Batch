/*
        input   :   5
        output  :   1   3   5
*/
/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

/////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step1   :   write a program which accept N from user and print all odd number upto N.
//  
//
/////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    initially i created a variable for getting user input which is regular variable "iValue"
                    create function OddDisplay use loop 

*/  
//  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
//      Description     :   print like this "5->1   3   5"                      
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void OddDisplay (int iNo)
{
    int iCnt = 0; //function veriable initial value

    if(iNo<0)   //filter -ve value
    {
        iNo = - iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt+=2)   //buisness logic
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

    OddDisplay(iValue); 

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
//      5           1   3   5
//      3           1   3
//      -3          1   3
//      Abcd        character not valid
//
//
////////////////////////////////////////////////////////////////