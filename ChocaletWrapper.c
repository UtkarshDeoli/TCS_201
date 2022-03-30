// 3 inputs money cost and wrappers
// let us say they have 15 rupee
// let the cost be 3 rupee
// he will get 5 chocolate
//for every 2 wrapper one will get 1 chocolate
//find the total number of chocolate he can buy

#include<stdio.h>
int choco(int c, int w);
{
    if (c < w)
        return 0;
    return c/w + choco(c/wrap+c%wrap , wrap);
}
void main ()
{
    int m  , c , w;printf("Enter the Amount You Have: && Cost of Choco :");
    scanf("%d",&m , &c);
    int ch = m/c;

    int numCh = chocolate(int num );
    }