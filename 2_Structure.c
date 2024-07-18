#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Product
{
    int PId;
    char PName[20];
    float PPPrice;
    float PSPrice;
};

int main()
{
    struct Product Pobj1 = {101,"Laptop",40000,45000}, Pobj2 = {};

    Pobj2.PId = 102;
    strcpy(Pobj2.PName,"Mobile");
    Pobj2.PPPrice = 9500;
    Pobj2.PSPrice = 10000;

    printf("\n 1st Product Details => \n");

    printf("\n Product Id Is = %d.",Pobj1.PId);
    printf("\n Product Name Is = %s.",Pobj1.PName);
    printf("\n Product Purchase Price Is = %0.2f.",Pobj1.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",Pobj1.PSPrice);

    printf("\n\n 2nd Product Details => \n");


    printf("\n Product Id Is = %d.",Pobj2.PId);
    printf("\n Product Name Is = %s.",Pobj2.PName);
    printf("\n Product Purchase Price Is = %0.2f.",Pobj2.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",Pobj2.PSPrice);

    getch();
    return 0;
}
