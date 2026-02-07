#include<stdio.h>
#define ERR_INVALID -1
//input 
int Factorial(int iNo)
{
    unsigned long iCnt = 0;
    int iFact = 1;
    if (iNo < 0)
    {
        return ERR_INVALID;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf(" number is invalid");
    }
    else
    {

        printf("factorial is: %d\n",iRet);
    }
     return 0;
}