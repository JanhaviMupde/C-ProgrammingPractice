#include<stdio.h>
//input 
unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    unsigned long iValue = 0;
    unsigned long iRet = 0;

    printf("enter the numbern: ");
    scanf("%lu", &iValue);
    //%lu for unsigned long value 
    
    iRet = Factorial(iValue);
     printf(" factorial is : %lu\n",iRet);
     return 0;
}
