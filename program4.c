#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float percentage = 0.0f;

    printf("Enetr your total marks:\n");
    scanf("%d", &Total);

    printf("Enetr your obtained marks: \n");
    scanf("%d",&Obtained);

    percentage =((float)Obtained / (float)Total)*100;

    printf("percentage is : %.2f%\n", percentage);
    return 0;
}