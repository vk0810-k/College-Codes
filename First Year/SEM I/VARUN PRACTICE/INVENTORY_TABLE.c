#include<conio.h>
#include<stdio.h>
main()
{
    FILE *fp;
    int number,quantity,i,price,value;
    char item[10],filename[10];
    printf("Enter File name::");
    scanf("%s",filename);
    fp = fopen(filename,"w");
    printf("Item      Number     Price     Quantity");
    for(i = 1;i<=3;i++)
    {
        fscanf(stdin,"%s %d %d %d",item,&number,&price,&quantity);
        fprintf(fp,"%s %d %d %d",item,number,price,quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp = fopen(filename,"r");
    printf("Item      Number     Price     Quantity     Value\n");
    for(i = 1;i <= 3;i++)
    {
        fscanf(fp,"%s %d %d %d",item,&number,&price,&quantity);
        value = price * quantity;
        fprintf(fp,"%s %d %d %d %d",item,number,price,quantity,value);
    }
    fclose(fp);
}
