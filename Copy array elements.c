#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int i,n;
    printf("Enter you array elements upto 100 :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("elements - %d :",i);
        scanf("%d",&arr1[i]);
    }
    //copied array elements of arr1 to arr2
    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Array elements stored : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr1[i]);
    }

    printf("\nArray elements stored copied : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr2[i]);
    }
    getch();

}
