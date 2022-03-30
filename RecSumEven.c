#include<stdio.h>
int sum(int);
int temp = 0;
void main ()
{
    int num = 0;printf("Enter Number of Even Number : ");
    scanf("%d",&num);
    int ans = sum(num*2);
    printf("The Sum Of Given First Even Number is :");
    printf("%d",ans);
}

int sum (int a)
{
    if (a>=2)
        {
            temp += a;
            sum(a-2);
        }
    return (temp);
}