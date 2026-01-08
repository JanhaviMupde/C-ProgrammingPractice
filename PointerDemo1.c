#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf("size of iptr : %d byte\n",sizeof(iPtr));
    
    printf("size of cptr : %d byte\n",sizeof(cPtr));

    //expected 8bytes bcz pointer is by default unsigned long

    return 0;
}