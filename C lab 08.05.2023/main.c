#include <stdio.h>
#include <stdlib.h>

int main()
{   //practical 1
    //Q 1
    printf("My name is Jayani Chamoda\n");
    printf("My school is Anula Vidyalaya\n");

    //Q 2
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

    //Q 3
    int a;
    float b;
    double c;
    char name [20];

    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter an integer :");
    scanf("%d",&a);
    printf("Enter a float :");
    scanf("%f",&b);
    printf("Enter a double :");
    scanf("%lf",&c);
    printf("Your name is %s\n",name);
    printf("Integer = %d\n",a);
    printf("Float = %f\n",b);
    printf("Double = %f",c);

    //Q 4
     int d,e,total;

    printf("Enter the first number:");
    scanf("%d",&d);
    printf("Enter the second number:");
    scanf("%d",&e);
    total = d+e;
    printf("The total is %d",total);

    //Q 5
    float x,y,average;
    printf("Enter the first decimal number:");
    scanf("%f",&x);
    printf("Enter the second decimal number:");
    scanf("%f",&y);
    average =(x+y)/2;
    printf("The average is %f",average);

    //Q 6
    int byear,age;
    char name1[20];
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter your birth year :");
    scanf("%d",&byear);
    age = 2023-byear;
    printf("Your age is %d",age);

    //Q 7
   int n1,n2,n;
   printf("Enter the first number :");
   scanf("%d",&n1);
   printf("Enter the second number :");
   scanf("%d",&n2);
   printf("Before swapping\nFirst number is %d\nSecond number is %d\n",n1,n2);

   n=n1;
   n1=n2;
   n2=n;

   printf("After swapping\nFirst number is %d\nSecond number is %d",n1,n2);








    return 0;
}
