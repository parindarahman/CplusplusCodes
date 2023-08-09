#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a[] = {16, 190, 11, 15, 10, 12, 14};
    int n=7;

    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;

        while((temp<a[j]&&(j>=0)))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    for(int i=0;i<7;i++)
        printf("%d\t", a[i]);

    return 0;
}
