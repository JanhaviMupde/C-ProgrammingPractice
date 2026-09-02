////////////////////////////////
// file name : program2.c
// Description: to calculte the percentage
// author : Janhavi Santosh Mupde
////////////////////////////
#include<stdio.h>
 
int main()
{
    int Total = 400;
    int Obtained = 360;
    float percentage = 0.0f;
    percentage = (Obtained / Total) * 100;
    printf("Percentage is : %f\n",percentage);


    return 0;
}