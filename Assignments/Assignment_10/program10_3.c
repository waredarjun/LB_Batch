#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   KMtoMeter
//      Description     :   convert kilometer distance into meter                     
//      Input           :   integer 
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return 0;
}
