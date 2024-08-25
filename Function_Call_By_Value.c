#include<stdio.h>

void swap(int ,int);                   ///Declaration Of Function

int main()
{
    int a = 10;
    int b = 20;
    printf("\n Before Swapping Values in main : \n a = %d & b = %d",a,b);

    swap(a,b);         ///Function call
    printf("\n After Swapping Values in main: \n a = %d & b = %d",a,b);

    return 0;
}

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n Swapping in function : \n a = %d & b = %d",a,b);
}

