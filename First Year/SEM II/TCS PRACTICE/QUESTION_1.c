#include<conio.h>
#include<stdio.h>
main()
{
    FILE *fp;
    char data[1000],filename;
    int count = 0;
    printf("Enter File name::");
    scanf("%s",filename);
    printf("Content of data::");
    fp = fopen(filename,"w");
    scanf("%s",data);
    fclose(fp);
    fp = fopen(filename,"r");
    while((data = getc(fp)) != EOF)
    {
        if(ch ==' ' || ch == '\n')
            count++;
    }
    printf("In %s file number is %d",filename,count);
    fclose(fp);
}
