#include<iostream>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main()
{
   int a[10],n;
   printf("Enter the number of elements: ");
   scanf("%d",&n);

   fflush(stdin);
   printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);


       for(int i=1;i<n;++i)
       {
           for(int j=0;j<(n-1);j++)
            {
               if(a[j]>a[j+1])
               {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }
            }
       }
   printf("\nArray after sorting: ");
   for(int i=0;i<n;i++)
   {
       printf("%d",a[i]);
       fflush(stdout);
   }
   return 0;


}
