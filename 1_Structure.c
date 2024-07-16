#include<stdio.h>
#include<string.h>
#include<conio.h>

struct Product
{
    int PId;
    char PName[20];
    float PPPrice;
    float PSPrice;
};

int main()
{
    struct Product Pobj;

    Pobj.PId = 101;
    strcpy(Pobj.PName,"Book");
    Pobj.PPPrice = 200;
    Pobj.PSPrice = 250;

    printf("\n Product Id Is = %d.",Pobj.PId);
    printf("\n Product Name Is = %s.",Pobj.PName);
    printf("\n Product Purchase Price Is = %0.2f.",Pobj.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",Pobj.PSPrice);

    getch();
    return 0;

}
