//29 aug 2025
#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Result of subtraction is : %ld\n",q-p);  //3
    //just to avoid the waring use %ld = long d

    q = q-2;
    
    printf("Data pointed by q is : %d\n",*q);  //allowed

    return 0;
}