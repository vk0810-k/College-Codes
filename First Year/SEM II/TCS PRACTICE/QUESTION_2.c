#include <stdio.h>

main()
{
  int iRow1,iRow2,iCol1,iCol2, c, d, k, sum = 0;
  int *ipMatlP1[10][10], *ipMatlP2[10][10], multiply[10][10];

  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &iRow1, &iCol1);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < iRow1; c++)
    for (d = 0; d < iCol1; d++)
      scanf("%d", &ipMatlP1[c][d]);

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &iRow2, &iCol2);

  if (iCol1 != iRow2)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");

    for (c = 0; c < iRow2; c++)
      for (d = 0; d < iCol2; d++)
        scanf("%d", &ipMatlP2[c][d]);

    for (c = 0; c < iRow1; c++) {
      for (d = 0; d < iCol2; d++) {
        for (k = 0; k < iRow2; k++) {
          sum = sum + *ipMatlP1[c][k] * *ipMatlP2[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < iRow1; c++) {
      for (d = 0; d < iCol2; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }
}
