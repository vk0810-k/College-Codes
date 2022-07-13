#include<stdio.h>
void fun(int x)
{
    printf("The value is:%d",x);
}
main()
{
    void(*fun_ptr)(int)=fun;
    fun_ptr(10);
}
