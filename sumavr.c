#include<stdio.h>
void main ()
{
    int sum = 0 ; float avr = 0;
    int n=0;
    printf("Size Of Array :");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d Numbers:",n);
    for (int i = 0 ; i<n ; i ++)
    {
        scanf("%d",&num[i]);
        sum = sum +num[i];
    }
    avr = (float)sum/n;
    printf("The Sum is :%d , The Avrage is :%f",sum , avr );
    }