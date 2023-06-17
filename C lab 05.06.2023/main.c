#include <stdio.h>
#include <stdlib.h>

int main()
{   //Practical 3
    //Q 1
    int x,y,high;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("The highest number is %d",x);
    else
    printf("The highest number is %d",y);

    //Q 2
    int n1,n2,n3,max,low;
    printf("Enter three numbers :");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    printf("the highest number is %d\n",max);
    low=n2;
    if(n1<low)
    low=n1;
    if(n3<low)
    low=n3;
    printf("The lowest number is %d",low);

    //Q 3
    int nsalary,bsalary;
    char name[20];
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter your basic salary :");
    scanf("%d",&bsalary);

    if(bsalary<5000)
    nsalary=bsalary+(5*bsalary)/100;
    else if(5000<=bsalary&&bsalary<10000)
    nsalary=bsalary+(10*bsalary)/100;
    else
    nsalary=bsalary+(15*bsalary)/100;
    printf("New salary is %d",nsalary);

    //Q 4
    float rad;
    printf("Enter the radius :");
    scanf("%f",&rad);
    printf("Diameter is %.2f\n",rad*2);
    printf("Circumferance is %.2f\n",2*rad*3.14159);
    printf("Area is %.2f\n",3.14159*rad*rad);

    //Q 5
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    if(x%y==0)
    printf("%d is a multiple of %d",x,y);
    else
    printf("%d is not a multiple of %d",x,y);

    //Q 6
    printf("A=%d\n",'A');
    printf("B=%d\n",'B');
    printf("C=%d\n",'C');
    printf("a=%d\n",'a');
    printf("b=%d\n",'b');
    printf("c=%d\n",'c');
    printf("0=%d\n",'0');
    printf("1=%d\n",'1');
    printf("2=%d\n",'2');
    printf("$=%d\n",'$');
    printf("*=%d\n",'*');
    printf("+=%d\n",'+');
    printf("/=%d\n",'/');
    printf(" =%d\n",' ');

    return 0;
}
