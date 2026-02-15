#include<stdio.h>
int CountEvenDigit(int iNo) //count even digit from given number
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    
   {
    iDigit = iDigit % 10;
    if(iDigit % 2) == 0
    {
        iCnt++;
    }
    iNo = iNo / 10;
    iCnt++;
   }
   return iCnt;

}

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf(" enter number : \n");
    scanf("%d", iValue);

    iRet = CountEvenDigit(iValue);
    printf("number of even digits %d", iRet);

    return 0;
}