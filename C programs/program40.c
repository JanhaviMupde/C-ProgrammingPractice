#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int iCnt=0;
    bool bFlag=0;

    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }

    for(iCnt= 1; iCnt <= (iNo/2); iCnt++ )
    {
       if ((iNo % iCnt) == 0)
       {
        bFlag = false;
        break;
       }
    }
    return bFlag;
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is the prime number",iValue);

    }
    else
    {
        printf("%d is not prime number");
    }
    return 0;
}