#include <stdio.h>
#include <stdlib.h>

int main()
{
      int t1[3][3],t2[3][3],t3[3][3],j,i;

      printf("Enter elements for first array\n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf("Enter element %d in row %d:",j+1,i+1);
            scanf("%d",&t1[i][j]);
        }
        printf("\n");
      }
       printf("\nEnter elements for second array\n");
       for(i=0;i<3;i++)
       {
         for(j=0;j<3;j++)
         {
             printf("Enter element %d in row %d:",j+1,i+1);
             scanf("%d",&t2[i][j]);
         }
         printf("\n");
       }
        printf("\nSum\n");
        for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          {
            printf("%d\t",t1[i][j]+t2[i][j]);
          }
          printf("\n");
        }

    return 0;
}
