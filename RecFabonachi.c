#include<stdio.h>
int fab (int);
int u = 0 , t = 1;
void main ()
{
    int num = 0;printf("(Faboachi)Enter a Number : ");
    scanf("%d", &num);
    int ans = fab(num);
    printf("The Answer is :");
    printf("%d", ans);
}

int fab (int a)
{
    if (a==0 || a==1)
        return a;
    return fab(a-1)+fab(a-2);
}