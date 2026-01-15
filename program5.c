////////////////////////////////
// file name : program5.c
// Description: to calculte the percentage
// author : Janhavi Santosh Mupde
////////////////////////////
// Algorithm-

// Start
//      Take 2 number as a input from the user
//      Store two numbers
//      calculate the percentage 
//      Display the result
// End
#include<stdio.h>
 float CalculatePercentage(int iObatinedMarks, int iTotalMarks){
        float fPercentageValue = 0.0f;

        fPercentageValue = ((float)iObatinedMarks / (float)iTotalMarks) * 100;
        ;return fPercentageValue;

 }
 int main(){
    int iObtained = 0;
    int iTotal = 0;
    // float percentage 0.0f;

    printf("Enter total marks: ");
    scanf("%d",&iTotal);

    printf("Enter obtained marks: ");
    scanf("%d", &iObtained);

    float fPercentage = CalculatePercentage(iObtained,iTotal);
    printf("Percentage is :.%.2f%%\n",fPercentage);
    return 0;
 }