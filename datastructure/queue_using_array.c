#include<stdio.h>
#include<conio.h>
#define capacity 5
int queue[capacity];
int front=0;
int rear=0;
void in(void);
void de(void);
void dis(void);
int main()
{
int ch;
while(1)
{
printf("Queue operations\n");
printf("1.Inqueue\n2.Dequeue\n3.Display\n4.Quit\n");
printf("Enter your choice=");
scanf("%d",&ch);
switch(ch)
{
case 1: in();
break;
case 2: de();
break;
case 3: dis();
break;
case 4: exit(1);
break;
default: printf("Invalid choice\n");
break;
}
}
}
void in()
{
if(rear==capacity)
{
printf("queue is full\n");
}
else
{
printf("enter queue data=");
scanf("%d",&queue[rear]);
rear++;
}
printf("\n\n");
}
void de()
{
int i;
if(rear==0)
{
printf("No element\n");
}
else
{
printf("element to be delete=%d",queue[front]);
printf("\n\n");
for(i=0;i<rear-1;i++)
{
queue[i]=queue[i+1];
}
rear--;
}
}
void dis()
{
if(rear==0)
{
printf("no element\n");
}
else
{
int i;
for(i=front;i<rear;i++)
{
printf("{%d}",queue[i]);
}
printf("\n\n");
}
}