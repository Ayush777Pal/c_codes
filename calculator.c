#include<stdio.h>
#include<math.h>
void clear_d(void);
int main()
{
float n1,n2;
while(1)
{
clear_d();
int c;
printf("Calculator");
printf("\n\n");
printf("enter number 1\n");
scanf("%f",&n1);
printf("enter number 2\n");
scanf("%f",&n2);
printf("Select operation:\n");
printf("1.Addition\n2.Substration\n3.Multiplication\n4.Divide\n5.Quit\n");
scanf("%d",&c);
printf("operation selected:%d\n",c);
switch(c)
{
case 1:printf("Addition\n");
 printf("%.2f+%.2f=%.2f",n1,n2,n1+n2);
break;
case 2:printf("Substraction\n");
 printf("%.2f-%.2f=%.2f",n1,n2,n1-n2);
break;
case 3:printf("Multiplication\n");
 printf("%.2f*%.2f=%.2f",n1,n2,n1*n2);
break;
case 4:printf("Divide\n");
 printf("%.2f/%.2f=%.2f",n1,n2,n1/n2);
break;
case 5:exit(1);
break;
default: printf("Invalid choice");
break;
}
printf("\n\n");
sleep(5);
}

}
void clear_d()
{
system("clear");
}