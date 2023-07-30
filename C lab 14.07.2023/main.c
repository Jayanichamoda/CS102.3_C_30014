#include <stdio.h>
#include <stdlib.h>

int main()
{   //Practical 6
    //Q1
    int n[10],count,max,min,sum=0;
    float avg;
    for (count=0;count<10;count++)
    {
       printf("Enter %d number :",count+1);
       scanf("%d",&n[count]);
       sum=sum+n[count];
       if(n[count]>max)
       max=n[0];
       {
         if(n[count]>max)
         max=n[count];
       }
       min=n[0];
       {if(n[count]<min)

         min=n[count];
       }
     }
     {
        avg=(float)sum/10.0;
        printf("The avarage is %.2f \n",avg);
        printf("The maximum is %d \n",max);
        printf("The minimum is %d \n",min);
     }
     for (count=9;count>=0;count--)
     {
        printf("Reverse oder of values is %d \n",n[count]);
     }

     //Q2
     int arr1[2],arr2[2],count,sum[2];
     for(count=0;count<2;count++)
     {
       printf("Enter 1st value :");
       scanf("%d",&arr1[count]);
       printf("Enter 2nd value :");
       scanf("%d",&arr2[count]);
       sum[count]=arr1[count]+arr2[count];
     }
     for(count=0;count<2;count++)
     printf("\n%d+%d=%d\n",arr1[count],arr2[count],sum[count]);

     //Q3
     int arr1[2],arr2[2],count,prod[2];
     for(count=0;count<2;count++)
     {
       printf("Enter 1st value :");
       scanf("%d",&arr1[count]);
       printf("Enter 2nd value :");
       scanf("%d",&arr2[count]);
       prod[count]=arr1[count]*arr2[count];
     }
     for(count=0;count<2;count++)
     printf("\n%d*%d=%d\n",arr1[count],arr2[count],prod[count]);

     return 0;
}
