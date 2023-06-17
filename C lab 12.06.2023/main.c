#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 4

    //Q 1
    //1st part
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    printf("The %d is an even number ",n);
    else
    printf("The %d is an odd number",n);

    //2nd part
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:printf("%d is an even number",n);break;
        case 1:printf("%d is an odd number",n);break;
    }

    //Q 2
    float n1, n2;
    char symbol[2];
    printf("\nEnter First Number: ");
    scanf("%f", &n1);
    printf("Select the Calculation Operator: \n");
    printf("+, -, /, * : \n");
    scanf("%s", symbol);
    printf("Enter Second Number: ");
    scanf("%f", &n2);
    switch (symbol[0])
    {
        case '+':
            printf("%.2f",n1+n2);
            break;
        case '-':
            printf("%.2f",n1-n2);
            break;
        case '*':
            printf("%.2f",n1*n2);
            break;
        case '/':
            printf("%.2f",n1/n2);
            break;
    }

    //Q 3
    int main()
    float rad;
    int cal;
    printf("1.circumference of a circle\n2.Area of a circle\n3.Volume of a sphere\n");
    printf("Select one number from the above: ");
    scanf("%d",&cal);
    printf("Enter a radius :");
    scanf("%f",&rad);
    switch(cal)
    {
        case 1:printf("Circumference of a circle is %.2f",2*3.14*rad);break;
        case 2:printf("Area of a circle is %.2f",3.14*rad*rad);break;
        case 3:printf("Volume of a sphere is %.2f",(4*3.14*rad*rad*rad)/4);break;

    }

    //Q 4
    int main()
    char vow;
    printf("Enter a letter :");
    scanf("%c",&vow);
    switch(vow)
    {
       case 'a':printf("The entered letter is a vowel:");break;
       case 'e':printf("The entered letter is a vowel:");break;
       case 'i':printf("The entered letter is a vowel:");break;
       case 'o':printf("The entered letter is a vowel:");break;
       case 'u':printf("The entered letter is a vowel:");break;
       default:printf("The entered letter is not a vowel");break;
    }

    //Q 5
    int mon;
    printf("Enter a month number :");
    scanf("%d",&mon);
    switch(mon)
    {
       case 1 :printf("January\n31 total days in the month ");break;
       case 2 :printf("February\n28 total days in the month ");break;
       case 3 :printf("March\n31 total days in the month ");break;
       case 4 :printf("April\n30 total days in the month ");break;
       case 5 :printf("May\n31 total days in the month ");break;
       case 6 :printf("June\n30 total days in the month ");break;
       case 7 :printf("July\n31 total days in the month ");break;
       case 8 :printf("August\n31 total days in the month ");break;
       case 9:printf("September\n30 total days in the month ");break;
       case 10:printf("October\n31 total days in the month ");break;
       case 11:printf("November\n30 total days in the month ");break;
       case 12:printf("December\n31 total days in the month ");break;
    }










    return 0;
}
