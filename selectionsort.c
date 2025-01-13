#include<stdio.h>
#include<stdlib.h>

int a[100];
int selectionsort(int a[],int n)
{
    int i,j;
    int min;
    int temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (a[min]>a[j])
                min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }   
    return *a; 

}
void printArray(int a[],int n)
{
    printf("the list is \n==============================================================\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
void main()
{
   int a[]={23,2,4,1,5};
   int n=5;
   selectionsort(a,n);
   printArray(a,n);



}