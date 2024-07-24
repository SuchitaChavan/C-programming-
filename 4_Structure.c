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
    int i=0;
    struct Product Pobj[5]={{},{},{},{},{}};

    for(i=0;i<5;i++)
    {

    printf("\n %d Product Details Are => \n",i+1);

    printf("\n Product Id Is = %d.",Pobj[i].PId);
    printf("\n Product Name Is = %s.",Pobj[i].PName);
    printf("\n Product Purchase Price Is = %0.2f.",Pobj[i].PPPrice);
    printf("\n Product Sales Price Is = %0.2f.\n",Pobj[i].PSPrice);

    }

    getch();
    system("cls");


    for( i=0 ; i<5 ; i++)
    {

    printf("\n Enter %d Product Details => \n",i+1);

    printf("\n Enter Product Id : ");
    scanf("%d",&Pobj[i].PId);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(Pobj[i].PName);

    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj[i].PPPrice);

    printf("\n Enter Product Sales Price : ");
    scanf("%f",&Pobj[i].PSPrice);
    }

    getch();

    for(i=0;i<5;i++)
    {

    printf("\n %d Product Details Are => \n",i+1);

    printf("\n Product Id Is = %d.",Pobj[i].PId);
    printf("\n Product Name Is = %s.",Pobj[i].PName);
    printf("\n Product Purchase Price Is = %0.2f.",Pobj[i].PPPrice);
    printf("\n Product Sales Price Is = %0.2f.\n",Pobj[i].PSPrice);

    }

   getch();
   return 0;
}
