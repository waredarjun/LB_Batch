/*Check Admission Eligibility*/

/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 1  :   Understand the problem statement
//                  "A student is eligible for admission if the student's marks are at least 60 and age is at 
//                  least 17 years. Accept both values and determine eligibility. Negative age or marks outside
//                  0-100 must be treated as invalid input."
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*              START
                    Accept a marks and age from student then i create a function for checking of student addmission, invalid mark, invalid age,etc. 
                    using if else stetment. declearing veriable name as fMarks for input mark from student and function parameter
                    and iAge for age of student and secound parameter of function.
                    
            
*/  
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
#include<stdlib.h>


////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CheckAdmission
//      Description     :   Checking admission Eligibility                      
//      Input           :   integer, integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   16/11/2026
//
//
//
//  
/////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
        return;
    }
    else if (iAge < 0)
    {
        printf("Invalid Age\n");
        return;
    }
    else if (fMarks < 60 || iAge < 17)
    {
        printf("Not Eligible\n");
        return;
    }
    else
    {
        printf("Eligible for Admission\n");
    }

}


////////////////////////////////////////////////////////////////
//
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////


int main()
{

    float fMarks = 0.0f;
    
    printf("Enter marks : ");
    scanf("%f",&fMarks);

    int iAge = 0;

    printf("Enter Age : ");
    scanf("%d",&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////
//
//
//      Step 5:Test the Program
//  
//      Tested test Cases
//      ----------------------------------------
//      Marks       Age        Output       
//      ------------------------------------------
//      80          18          Eligible for Admission                          
//      50          18          Not Eligible                 
//      80          16          not eligible                 
//      50          16          not eligible                
//      60          17          eligible
//      101         18          invalid mark
//      80          -1          invalid age
//
//
//
////////////////////////////////////////////////////////////////

