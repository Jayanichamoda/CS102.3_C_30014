#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 2

    //Q 1
    int age;
    printf("HI, HOW OLD ARE YOU ? ");
    scanf("%d",&age);
    printf("\n\nWELCOME (%d)\n",age);
    printf("LET'S BE FRIENDS!");

    //Q 2
    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d",4,16,64);

    //Q 3
    double dis,time,avs;
    printf("Enter the distance traveled in meters :");
    scanf("%lf ",&dis);
    printf("Enter time in seconds :");
    scanf("%[f ",&time);
    avs=dis/time;
    printf("The average speed is %f ms-1",avs);

    //Q 4
    float c,f;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9);
    printf("The temperature is %fC",c);

    return 0;
}
