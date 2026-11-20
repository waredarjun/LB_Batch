#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Multiply
//      Description     :   return multiplication of three number                    
//      Input           :   integer integer integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;
    

    printf("Enter three number: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return 0;
}
