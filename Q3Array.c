#include<stdio.h>
void main ()
{
    int n= 0;int k;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    printf("Enter K : ");
    scanf("%d",&k);
    int num [n];
    printf("Enter %d Numbers:\n",n);
    for (int i = 0 ; i<n ; i ++)
    {
        scanf("%d",&num[i]);
    }
    int temp=0; int equal=0;
    for (int i = 0 ; i<n ; i ++)
    {
        if (num[i]>k)
            temp++;
        if (num[i]==k)
            equal++;
    }
    printf("No. of Greater = %d \nNo. of smaller = %d \nNo. Of Equal = %d", temp , n-(temp+equal) , equal);
    }