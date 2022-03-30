#include<stdio.h>
void main ()
{
    int sum = 0 ; float avr = 0;
    int num [10];printf("Enter 10 Numbers:");
    for (int i = 0 ; i<10 ; i ++)
    {
        scanf("%d",&num[i]);sum = sum + num[i];
    }
    avr = sum /10;
    printf("The Sum is :%d , The Avrage is :%.2f",sum , avr );
    }