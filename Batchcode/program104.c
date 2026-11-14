#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
       if((iNo % iCnt) == 0)
       {
        iSum = iSum + iCnt;
       }
    }
    if(iSum == iNo)
    {
        printf("It is Perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue)

    printf("Summetion of factor: %d\n",iRet);

    return EXIT_SUCCESS;
}
//time complexcity : O(N/2)