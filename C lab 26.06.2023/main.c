#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5

    //Q 1
    //Using while loop
    int a=0;
    while(a<=100)
    {
        printf("%d ",a);
        a++;
    }

    //Using do while loop
    int b=0;
    do
    {
        printf("%d ",b);
        b++;
    }
    while(b<=100);

    //Using for loop
    int c;
    for(c=0;c<=100;c++)
    {
        printf("%d ",c);
    }

   //Q 2
   int totl=0,no[10],count;
   float ave;
   for(count=1;count<=10;count++)
   {
       printf("Enter %d mark:",count);
       scanf("%d",&no[count]);
       totl=totl+no[count];

    }
    ave=(float)totl/10.0;
    printf("The total of 10 marks is %d\n",totl);
    printf("The average of 10 marks is %.2f\n",ave);

    if(ave<50)
    printf("Fail!");
    else
    printf("Pass!");

    //Q 3
    int n,n1,fact=1;
    printf("Enter the number :");
    scanf("%d",&n1);
    n=n1;

    for(n;n>=1;n--)
    {
       printf("%d ",n);
       fact=fact*n;
    }
    printf("Factorial of given number is %d",fact);

    //Q4
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
       sum=sum+(n%10);
       n=n/10;
    }
    printf("The sum of all digits of the given number =%d",sum);

    //Q5
    int n,n1;
    printf("Enter the number :");
    scanf("%d",&n);

    do
    {
      n1=n%10;
      printf("%d",n1);
      n=n/10;
    }while(n!=0);

    //Q6
    int n,x,cal=1,count;
    printf("Enter the base :");
    scanf("%d",&x);
    printf("Enter the exponent :");
    scanf("%d",&n);

    for(count=1;count<=n;count++)
    {
      cal=cal*x;
    }
    printf("%dth power of the given base is :%d",n,cal);

    //Q7
    //Q8
     int x1,x,sum=0,cal,n,count=1,mod;
     printf("Enter a number :");
     scanf("%d",&x);
     x1=x;
     n=x;
     while(n!=0)
     {
       n=n/10;
       count++;

     }
     printf("%d",--count);

     while(x!=0)
     {
       mod=x%10;
       cal=pow(mod,count);
       sum=sum+cal;
       x=x/10;
     }
     printf("\n");
     if(x1==sum)
     printf("The given number is an armstrong number ");
     else
     printf("The given number is not an armstrong number");

     //Q9
     //Q 10
     int x,y;
     for(x=1;x<=5;x++)
     {
       for(y=1;y<=x;y++)
       {
         printf("*");
       }
       printf("\n");
     }

     //Q 11
     int n,count=0,x;
     printf("Enter the number:");
     scanf("%d",&n);
     for(x=2;x<=n;x++)
     {
        if(n%x==0)
        count++;

     }
     if(count<2)
     printf("It's a prime number");
     else
     printf("It's not a prime number");

     //Q 12
     int n,i;
     printf("Enter a number:");
     scanf("%d",&n);

     for(i=2;i<n;i++)
     {
        if(n%i==0)
        printf("%d ",i);

     }

     //Q 13
     int totl=0,no[10],count;
     float ave;
     for(count=1;count<=10;count++)
     {
        printf("Enter %d mark:",count);
        scanf("%d",&no[count]);
        totl=totl+no[count];

     }
     printf("Total is %d",totl);

     //Q 14
     int totl=0,no[10],count,evenc;
     float ave;
     for(count=1;count<=10;count++)
     {
       printf("Enter %d mark:",count);
       scanf("%d",&no[count]);
       totl=totl+no[count];
       if(no[count]%2==0)
       evenc++;

     }
     printf("Total is %d\n",totl);
     printf("Count of even numbers : %d",evenc);


     //Section B
     //Q 1
     int count=1,oddc=0,evenc=0,zeroc=0,no;
     while(no>=-99&&count<=10)
     {
        printf("Enter the %d number :",count);
        scanf("%d",&no);
        count++;
        if(no%2==0)
        evenc++;
        else if(no%2==1)
        oddc++;
        else
        zeroc++
      }
      printf("The total count of odd numbers is %d \n",oddc);
      printf("The total count of even numbers is %d",evenc);
      printf("The total count of zeros  is %d",zeroc);

      //Q 2
      int totl=0,no[10],coun;
      float ave;
      for(count=1;count<=10;count++)
      {
        printf("Enter %d mark:",count);
        scanf("%d",&no[count]);
        totl=totl+no[count];

      }
      ave=totl/10;
      printf("Total is %d",totl);
      printf("Average is %d",ave);

      //Q 3
      int totl=0,price[10],coun,i=0;
      float ave;
      for(count=1;count<=10;count++)
      {
        printf("Enter %d mark:",count);
        scanf("%d",&no[count]);
        totl=totl+no[count];
        if(price>200)
        i++;


      }
      ave=totl/10;
      printf("Average price is %d",ave);

      //Q 4
      int employeeNo;
      float basicSalary;
      int count = 0;
      printf("Enter the employee number and basic salary (-999 to end):\n");
      while (1) {
      printf("Employee No: ");
      scanf("%d", &employeeNo);
      if (employeeNo == -999)
      break;
      printf("Basic Salary: ");
      scanf("%f", &basicSalary);
      if (basicSalary >= 5000)
      count++;
      }
      printf("Number of employees with basic salary >= $5000: %d\n", count);

      //Q 5
      int empno=0, count1 = 0, count2 = 0;
      float ot=0, hours = 0,percen;

      while (1) {
      printf("Employee No: ");
      scanf("%d", &empno);
      if (empno == -999) {
      break;
      }
      count1++;
      printf("No of hours worked: ");
      scanf("%f", &hours);
      if (hours <= 40) {
      ot = hours * 150;
      } else {
      ot = hours * 200;
      }
      printf("Empolyee No: %d\n", empno);
      printf("Overtime Payment: %.2f\n", ot);
      if (ot >= 4000){
      count2++;
      }
      }
      percen = (float)(count2 / count1)*100;
      printf("Percentage: %.2f%%", percen);

































    return 0;
}
