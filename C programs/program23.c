#include<stdio.h>
//% mod operator
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
    bool bResult = false;
    if((iNo % 5 ) ==0 && (iNo % 3) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
     return bResult;

}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("check whethee num is divisile by  3 and 5: ");
    scanf("%d", &iValue);
    
    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n", iValue);
    }
else 
{
    printf("%d is not divisible by 3 or 5\n",iValue);
}
return 0;
}