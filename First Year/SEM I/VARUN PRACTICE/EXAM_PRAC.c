#include<stdio.h>
int main()
{int i=0,j=0;
for(i=0;i<5;i++)
{
    for(j=0;j<4;j++)
    {
        if(i>1)
            continue;
    }
    printf("i=%d j=%d\n",i,j);
}
 return 0;
}
