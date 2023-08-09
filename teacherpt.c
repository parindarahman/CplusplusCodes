#include <stdio.h>
#include <string.h>


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

int main(){
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

