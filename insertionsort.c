//program for insertionsort using array
#include<stdio.h>
#include<stdlib.h>

int insertionsort(int a[],int n)
{
    int i=1;
    int j,v;
    while(i<n)
    {
        v=a[i];
        j=i;
        while(a[j-1]>v&&j>0)
        {
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=v;
        i=i+1;
    }
    return * a;
}

void main()
{
    int n;
    int a[100];
    printf("\nenter no of elemt") ;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nenter %d elemet ",i+1);
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
     for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
       
    }
}