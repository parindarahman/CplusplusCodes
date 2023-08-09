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

struct teacher{
    char  name[100];
    int age;
    char  address[100];
    int coursecodearr[6];
    char namearr[6][100];

};
struct permanentteacher{
    struct teacher info;
    int basesalary;
    int nocourse;
    int codearr[7];
    char coursename[7][100];
    int maxcourse;

};
struct visitingteacher{
    struct teacher info;
    int basesalary;
    int nocourse;
    int codearr[3];
    char coursename[3][100];
    int maxcourse;
};

void addtechcoursep(struct  permanentteacher*p1){
    if (p1->nocourse<=p1->maxcourse)
    {
        for(int i=0;i<p1->nocourse;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&p1->coursename[i]);
            printf("Enter course code\n");
            scanf("%d",&p1->codearr[i]);
        }
    }
    else{


        printf("You are not allowed to take more than %d courses \n",p1->maxcourse);
        for(int i=0;i<p1->maxcourse;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&p1->coursename[i]);
            printf("Enter course code\n");
            scanf("%d",&p1->codearr[i]);
        }
        p1->nocourse=p1->maxcourse;

     }

}



void addtechcoursev(struct  visitingteacher*v1){
    if (v1->nocourse<=v1->maxcourse)
    {
        for(int i=0;i<v1->nocourse;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&v1->coursename[i]);
            printf("Enter course code\n");
            scanf("%d",&v1->codearr[i]);
        }
    }
    else{


        printf("You are not allowed to take more than %d courses \n",v1->maxcourse);
        for(int i=0;i<v1->maxcourse;i++)
        {
            printf("Enter course name\n");
            scanf("%s",&v1->coursename[i]);
            printf("Enter course code\n");
            scanf("%d",&v1->codearr[i]);
        }
        v1->nocourse=v1->maxcourse;

     }

}
int getsalaryp(struct permanentteacher *p1)
{
    if(p1->nocourse>4)
    {
        return(p1->basesalary +((p1->nocourse -4)*2000));
    }
    else
    {
        return(p1->basesalary);
    }
}
int getsalaryv(struct visitingteacher *v1)
{

    if(v1->nocourse>2)
    {
        return(v1->basesalary +((v1->nocourse -2)*2000));
    }
    else
    {
        return(v1->basesalary);
    }
}

void printcoursespt(struct permanentteacher *p1,int number1)
{
    printf("name: %s \n",p1->info.name);
    printf("age: %d \n",p1->info.age);
    printf("address: %s \n",p1->info.address);
    printf("salary: %d \n",number1);
    for(int i=0;i<p1->nocourse;i++)
    {
        printf("course:%s \n",p1->coursename[i]);
        printf("code:%d \n",p1->codearr[i]);
    }


}
void printcoursesvt(struct visitingteacher *v1,int number2)
{
    printf("name: %s \n",v1->info.name);
    printf("age: %d \n",v1->info.age);
    printf("address: %s \n",v1->info.address);
    fflush(stdin);
    printf("salary: %d \n",number2);
    for(int i=0;i<v1->nocourse;i++)
    {
        printf("course:%s \n",v1->coursename[i]);
        printf("code:%d \n",v1->codearr[i]);
    }


}

void addcourse(struct student *s1,int x){


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
        for(int i=s1->xtaken;i<s1->xallowed;i++)
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
    struct student s1;
    int a;
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
    fflush(stdin);
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
    scanf("%d",&a);
    addcourse(&s1,a);
    printcourses(&s1);
    int more;int newadd;
    while(1)
    {
        printf("To add more courses enter 1 or else enter 0 \n");
        scanf("%d",&more);
        if(more==1)
        {
            printf("Enter how many more you want to add \n");
            scanf("%d",&newadd);
            if(s1.xtaken+newadd>s1.xallowed)
            {
                a=a+newadd;
                addcourse(&s1,a);
                printcourses(&s1);

            }
            else
            {
                a=a+newadd;
                addcourse(&s1,a);
                printcourses(&s1);
            }
        }
        else
        {
            break;
        }
    }
     struct visitingteacher v1;struct permanentteacher p1;int no;

    printf("Enter permanent teacher's name: ");
    scanf("%s",&p1.info.name );
    printf("Enter permanent teacher's age: ");
    scanf("%d",&p1.info.age );
    printf("Enter permanent teacher's address: ");
    scanf("%s",&p1.info.address );
    printf("Enter permanent teacher's no of courses: ");
    scanf("%d",&p1.nocourse);
    p1.basesalary=10000;
    p1.maxcourse=7;
    addtechcoursep(&p1);
    int r=getsalaryp(&p1);
    printcoursespt(&p1,r);
    fflush(stdin);

    printf("Enter visiting teacher's name: ");
    scanf("%s",&v1.info.name );
    printf("Enter visiting teacher's age: ");
    scanf("%d",&v1.info.age );
    printf("Enter visiting student's address: ");
    scanf("%s",&v1.info.address );
    printf("Enter visiting teacher's no of courses: ");
    scanf("%d",&v1.nocourse);
    v1.basesalary=4000;
    v1.maxcourse=3;
    addtechcoursev(&v1);
    int q=getsalaryv(&v1);
    printcoursesvt(&v1,q);

}

