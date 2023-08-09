#include <stdio.h>


 typedef struct student{
char name[100];
int age;
char address[50];
double cgpa;
char ID[10];
char course_code[5][100];

};struct student stud[10];



 int main(){

 printf("Enter Student information: \n");
 int i;
for(i=0;i<10;i++){
    printf("Name: ");
    scanf("%s",&stud[i].name);

     printf("age: ");
    scanf("%d",&stud[i].age);

     printf("address: ");
    scanf("%s",&stud[i].address);

     printf("cgpa: ");
    scanf("%fl",&stud[i].cgpa);

     printf("ID: ");
    scanf("%s",&stud[i].ID);

    // if(cgpa>= 2.5){



    }



  return;

 }
