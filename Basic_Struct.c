#include<stdio.h>
#include<string.h>

struct student
 {

    int Id;
    char Name[20];
    int Class;
 };
 int main()
 {
     struct student s;
     printf("Data of 1st student \n");

     s.Id = 101;
     strcpy(s.Name,"Suchita");
     s.Class = 1;

     printf("\n Student Id:%d",s.Id);
     printf("\n Student Name:%s",s.Name);
     printf("\n Student Class:%d",s.Class);

     return 0;

 }

