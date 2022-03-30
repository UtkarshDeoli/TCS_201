#include<stdio.h>
//input array and print it with address
void main ()
{
    int num [10];printf("Enter 10 Numbers:");
    for (int i = 0 ; i<10 ; i ++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0 ; i<10 ; i ++)
    {
        printf("%d's address = %u , value = %d",i , &num[i] ,num[i]);//%u for decimal %p for Hexa
        printf(",\n");
    }
    }