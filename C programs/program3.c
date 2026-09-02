#include<stdio.h>
int main()
{
    int Total = 400;
    int Obtained = 346;
    float Percentage = 0.0f;

    Percentage = ((float)Obtained / (float)Total)*100;

    printf("percentage is : %.2f%\n",Percentage);
    return 0;
}