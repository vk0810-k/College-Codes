#include<iostream>
#include<stdio.h>
using namespace std;
int func(int x,int y)
{
    int z;
    if(x<y)(x = x+y;y = x-y;x = x-y;);
        if(y = 0)
            return x;
    z = x-y*(x/y);
    return(func(y,z));
}

int main ()

{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x = func(a,b);
    printf("/n%d",x);
    return 0;
}

