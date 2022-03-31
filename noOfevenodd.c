#include<stdio.h>
void main ()
{
    int count = 0 ;
    int n=0;
    printf("Size Of Array :");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d Numbers:",n);
    for (int i = 0 ; i<n ; i ++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0 ; i<n ; i ++)
    {
        if (num[i]%2==0)
            count++;
    }
    printf("No of Even: %d \nNo. Of Odd: %d" ,count , n-count );
    }