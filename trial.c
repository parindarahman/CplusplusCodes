#include <stdio.h>
#include <string.h>
struct student {
   char  name[100];
   int age;
   char  address[100];
   double cgpa;
   char  id[100];
   int coursecodearr[6];
   char namearray[6][100];
   int xtaken;
   int xallowed;

};
void well(struct student *a){
    for(int i=0;i<2;i++){
        scanf("%s",&q);
    }

}
void print(struct student *q){
    for(int i=0;i<2;i++){
        printf("the names are %s \n",q.namearray[i]);
    }
}
int main( ) {
    struct student s1;
    char namearray[6][100];
    well(s1);
    print(s1);


}
//void addcourse(struct student s1,int noofcourses){
//    if(s1.cgpa<2.5 && noofcourses<=4)
//    {
//        for(i=0;i<noofcourses;i++)
//        {
//            scanf("%s",&s1.namearr[i]);
//            scanf("%d",&s1.coursecodearr[i]);
//        }
//
//    }
//    else if (s1.cgpa<2.5 && noofcourses>4)
//    {
//        printf("You are not allowed to take more than 4 courses");
//        for(i=0;i<4;i++)
//        {
//            scanf("%s",&s1.namearr[i]);
//            scanf("%d",&s1.coursecodearr[i]);
//        }
//
//    }
//    else if (s1.cgpa>=2.5 && noofcourses<=6)
//    {
//
//        for(i=0;i<noofcourses;i++)
//        {
//            scanf("%s",&s1.namearr[i]);
//            scanf("%d",&coursecodearr[i]);
//        }
//
//    }
//    else
//    {
//        printf("You are not allowed to take more than 6 courses");
//        for(i=0;i<6;i++)
//        {
//            scanf("%s",&s1.namearr[i]);
//            scanf("%d",&s1.coursecodearr[i]);
//        }
//
//    }
//}
//
