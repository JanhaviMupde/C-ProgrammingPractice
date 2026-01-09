#include<stdio.h>

struct Demo
{
    int i ;
    float f;
    int j;
};

int main()
{
    struct Demo obj; //memory allocated

    obj.i = 11;
    obj.f = 90.4f;
    obj.j = 21; 
    // . is direct accesing operator

    printf("%d\n",obj.i);
    printf("%f\n",obj.f);
    printf("%d\n",obj.j);

    return 0;
}