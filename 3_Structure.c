#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Product
{
     int PId;
    char PName[20];
    float PPPrice;
    float PSPrice;
};

int main()
{
    struct Product obj1 = {} , obj2 = {};

    printf("\n 1st Product Details => \n");

    printf("\n Product Id Is = %d.",obj1.PId);
    printf("\n Product Name Is = %s.",obj1.PName);
    printf("\n Product Purchase Price Is = %0.2f.",obj1.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.\n",obj1.PSPrice);

    printf("\n 2nd Product Details => \n");

    printf("\n Product Id Is = %d.",obj2.PId);
    printf("\n Product Name Is = %s.",obj2.PName);
    printf("\n Product Purchase Price Is = %0.2f.",obj2.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",obj2.PSPrice);

    getch();
    system("cls");


    printf("\n Enter 1st Product Details => \n");

    printf("\n Enter Product Id : ");
    scanf("%d",&obj1.PId);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(obj1.PName);

    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&obj1.PPPrice);

    printf("\n Enter Product Sales Price : ");
    scanf("%f",&obj1.PSPrice);



    printf("\n \n Enter 2nd Product Details => \n");

    printf("\n Enter Product Id : ");
    scanf("%d",&obj2.PId);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(obj2.PName);

    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&obj2.PPPrice);

    printf("\n Enter Product Sales Price : ");
    scanf("%f",&obj2.PSPrice);

    getch();


     printf("\n 1st Product Details Are => \n");

    printf("\n Product Id Is = %d.",obj1.PId);
    printf("\n Product Name Is = %s.",obj1.PName);
    printf("\n Product Purchase Price Is = %0.2f.",obj1.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",obj1.PSPrice);


    printf("\n 2nd Product Details Are => \n");

    printf("\n Product Id Is = %d.",obj2.PId);
    printf("\n Product Name Is = %s.",obj2.PName);
    printf("\n Product Purchase Price Is = %0.2f.",obj2.PPPrice);
    printf("\n Product Sales Price Is = %0.2f.",obj2.PSPrice);

  getch();
  return 0;

}
