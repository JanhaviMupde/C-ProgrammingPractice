#include<stdio.h>

#pragma pack(1)
// 2bytes padding gayab !!!!

struct Demo
{
    int i ;
    char ch1,ch2;
    float f;
    int j;
};

int main()
{

    printf("Size of structure is: %lu\n",sizeof(struct Demo));

    return 0;
}