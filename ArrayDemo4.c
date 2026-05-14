#include<stdio.h>
int main()
{
    int Arr[4] = { 10, 20, 30,40};

    printf("size of Arr : %lu\n",sizeof(Arr));      //16
    
    printf("Arr : %lu\n",Arr);      //100
    printf("&Arr : %lu\n",&Arr);        //100
    
    printf("Arr + 1: %lu\n",Arr + 1);       //104
    printf("(&Arr) + 1: %lu\n",(&Arr) + 1);     //116
    
    return 0;
}
