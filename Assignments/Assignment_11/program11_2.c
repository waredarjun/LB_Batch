// write a program which accept range from user and display all even number in between that range
// input: 23 35
// output: 24 26 28 30 32 34

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   RangeDisplayEven
//      Description     :   display even number from input1 to input2                      
//      Input           :   integer integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if(iCnt%2==0)
            {
                printf("%d ", iCnt);
            } 
        }
    }      
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter staring point: ");
    scanf("%d",&iValue1);
    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}
