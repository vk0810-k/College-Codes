//string function
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp = fopen("IWILLRETURNERROR.txt","r");
    printf("Value of error number is::%d",errno);
    printf("\n The error message is::%s",strerror(errno));
    perror("Message from perror");
    return 0;
}
