#include<stdio.h>
int sum (int);
void main ()
{
    int num = 0;
    scanf("%d", &num);
    printf("The Answer is :");
    int x = sum (num);
    printf("%d", x);
}
int ans = 0;
int sum (int a)
{
    if (a>0)
        {
            ans += a;
            sum (a-1);
        }
    return ans;
}