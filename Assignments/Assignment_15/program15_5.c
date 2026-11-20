#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Percentage
//      Description     :   Calculate percentage                 
//      Input           :   integer integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0;

    // Handle division by zero
    if(iTotal == 0)
    {
        return 0.0;
    }

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%", fRet);

    return 0;
}
