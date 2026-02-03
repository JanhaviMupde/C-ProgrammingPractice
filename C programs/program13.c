//ask user how many times you want to print
#include<stdio.h>
//iteration
void Display(int iNo)
{
    int iCnt = 0;
    for( iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\n", iNo);
    }

}
int main()
{
    int iValue = 0;

    printf( " enter the value\n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}