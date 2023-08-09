#include <stdio.h>
#include <string.h>

struct student {
   char  name[100];
   int age;
   char  address[100];
   double cgpa;
   char  id[100];
   int coursecodearr[6];
   char namearr[6][100];
   int xtaken;
   int xallowed;

};
bool addcourse(struct student *s1, int x){


    if (x<=s1->xallowed)
    {

        for(int i=0;i<x;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&s1->namearr[i]);
            printf("Enter course code\n");
            scanf("%d",&s1->coursecodearr[i]);
        }
        s1->xtaken=x;


    }
    else
    {
        printf("You are not allowed to take more than %d courses \n",s1->xallowed);
        for(int i=0;i<s1->xallowed;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&s1->namearr[i]);
            printf("Enter course code\n");
            scanf("%d",&s1->coursecodearr[i]);
        }
        s1->xtaken=s1->xallowed;
    }
}
void printcourses(struct student *s1)
{
    printf("name: %s \n",s1->name);
    printf("age: %d \n",s1->age);
    printf("address: %s \n",s1->address);
    printf("cgpa: %lf \n",s1->cgpa);
    printf("id: %s \n",s1->id);
    for(int i=0;i<s1->xtaken;i++)
    {
        printf("course:%s \n",s1->namearr[i]);
        printf("code:%d \n",s1->coursecodearr[i]);
    }


}

int main( ) {
    struct student s1;int a;
    printf("Enter student's name: ");
    scanf("%s",&s1.name );
    printf("Enter student's age: ");
    scanf("%d",&s1.age );
    printf("Enter student's address: ");
    scanf("%s",&s1.address );
    printf("Enter student's cgpa: ");
    scanf("%lf",&s1.cgpa );
    printf("Enter student's id: ");
    scanf("%s",&s1.id );
    s1.xtaken=0;
    if(s1.cgpa<2.5)
    {
        s1.xallowed=4;

    }
    else
    {
        s1.xallowed=6;
    }
    printf("Enter no of courses to add \n");




}


