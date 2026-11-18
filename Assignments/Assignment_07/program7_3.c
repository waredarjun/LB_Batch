/*
        input   :   5
        output  :   -5  -4  -3  -2  -1  0   1   2   3   4   5
*/
/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step1   :   write a program which accept number from user and print its number line.
//  
//
/////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    initially i created a variable for getting user input which is regular variable "iValue"
                    then i create a function name is "Display" declear function veriable "iCnt" and applying 
                    loop for printing -ve upto +ve value of user's input 
                                        

*/  
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//      Step 3  :   Decide the programming language
//                  We select C programming 
//  
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//      Step 4  :   Write the program
//        
//  
//////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Display
//      Description     :   print like this "3->    -3  -2  -1  0   1   2   3"                      
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
///////////////////////////////////////////////////////////////////////////////
void Display (int iNo)
{
    int iCnt = 0; //function veriable initial value

    if(iNo<0)
    {
        iNo = - iNo;
    }
    //print negetive value upto positive value
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)   //buisness logic
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
//      5           -5  -4  -3  -2  -1  0   1   2   3   4   5
//      3           -3  -2  -1  0   1   2   3
//      -3          -3  -2  -1  0   1   2   3
//      Abcd        character not valid
//
//
////////////////////////////////////////////////////////////////