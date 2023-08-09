#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


#define n 7
int a[n] = {4, 6, 3, 2, 1, 9, 7};

void display()
{
    int i;
    printf("\t[");

    for(i = 0;i<n;i++)
    {
        printf("%d", a[i]);
    }

    printf("]\n\n");
}

void selectionSort()
{
    for(int i=0; i< n-1; i++)
    {
        int indexMin = i;

        for(int j=i+1; j<n;j++)
        {
            if(a[j]<a[indexMin])
                indexMin =j;
        }
        if(indexMin != i)
        {
            printf("Items swapped:\t[ %d, %d ]\n",a[i],a[indexMin]);
            int temp = a[indexMin];
            a[indexMin]=a[i];
            a[i] =temp;
        }
        printf("Iteration %d#:",(i+1));
        display();
    }
}

int main()
{
    printf("Input Array: ");
    display();

    selectionSort();
    printf("\nOutput Array: ");
    display();
    return 0;
}

