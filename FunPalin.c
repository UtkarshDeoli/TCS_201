#include<stdio.h>
int reverse (int a)
{
    int sum = 0 ;
    int temp = a;
    while (temp >0)
    {
        int x = temp%10;
        sum = (sum*10)+x;
        temp /=10;
    }

    
    return (sum);
}
void palin(int a , int b)
{
    if (a==b)
        printf("PalinDrome");
    else
        printf("Not PalinDrome");
}
void main()
{
    int x = 0;
    printf("Enter A Number to check if it's Palindrome Or Not");
    scanf("%d", &x);
    int ans = reverse(x);
    palin(ans ,x);
}
