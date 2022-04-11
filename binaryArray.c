#include<stdio.h>
void main ()
{
    int arr [16]={};
    float num;

    printf("Enter a number to be Converted :");
    scanf("%f",&num);
    
    int temp = num ,i =0;
    float tempd = (num - temp);//STORE THE DECIMAL PART
    int arr1[50]={};
    int t = 0;
    while (tempd!=0.0000)
    {
        float dec = tempd*2;
        int u = dec;
        tempd = dec - u;
        arr1[t++]=u;
    }
    while (temp >0)
    {
        int x = temp%2 ;
        arr[i++]=x;
        temp /=2;
    }
    printf("The Binary of %f is :",num);
    for (int j = 15; j >=0; j--)
    {
        printf("%d",arr[j]);
    }
    printf(".");
    for (int j = 0; j <t; j++)
    {
        printf("%d",arr1[j]);
    }
        
}