#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int n= 0;int k;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    printf("Enter the Key : ");
    scanf("%d",&k);
    int num [n];
    printf("Enter %d Numbers:\n",n);
    for (int i = 0 ; i<n ; i ++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0 ; i<n ; i ++)
    {
        if(num[i]==k)
            {
                printf("Element Found On Index %d" ,i);
                exit(0);
            }
        }
        printf("Doesn't Exist");
    }
