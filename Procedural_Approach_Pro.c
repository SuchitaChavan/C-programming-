#include<stdio.h>

int Add(int no1,int no2)
{
    int Ans=0;
    Ans=no1+no2;
    return Ans;
}


int Sub(int no1,int no2)
{
    int Ans=0;
    Ans=no1-no2;
    return Ans;
}

int main()
{
    int N1,N2,Result;

    printf("\n Enter two numbers :");
    scanf("%d",&N1);
    scanf("%d",&N2);

    Result=Add(N1 ,N2);
    printf("\n Addition of two numbers is : %d",Result);

    Result=Sub(N1 ,N2);
    printf("\n Subtraction of two numbers is : %d",Result);

    return 0;


}
