#include<stdio.h>
int fact (int);
int factt = 1;
void main ()
{
    int num = 0;
    printf("Enter A Number: ");
    scanf("%d", &num);
    int ans = fact(num);
    printf("The Factorial is: ");
    printf("%d",ans);
}

int fact (int a)
{
    if (a>0)
    {
        factt = factt * a;
        fact(a-1);
    }
    else
        return factt;
}