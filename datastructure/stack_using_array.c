#include<stdio.h>
#include<conio.h>
#define capacity 5
void push(void);
void peek(void);
int isfull(void);
int isempty(void);
void display(void);
int stack[capacity];
int top=-1;
void poop(void);
int main()

{ int ch;
while(1)
{
printf("1.Push\n2.Peek\n3.Poop\n4.display\n5.Quit\n");
printf("Enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: peek();
break;
case 3: poop();
break;
case 4: display();
break;
case 5: exit(1);
break;
default: printf("Invalid input");
break;
}
}
}
void push()
{
int ele;
if(isfull())
{
printf("Stack is full\n");//to return printf statement
}
else
{
top ++;
printf("enter element");
scanf("%d",&ele);
stack[top]=ele;
}
}
void poop()
{
if(isempty())
{
printf("stack is empty\n");
}
else
{

printf("%d\n",stack[top]);
top--;
}
}
void display()
{
int i;
if(isempty())
{
printf("stack is empty\n");
}
else
{
printf("Element of stack are\n");
for(i=0;i<=top;i++)
{
printf("%d\n",stack[i]);

}
}

}
int isfull()
{
if(top==capacity-1)
{
return 1;
}
else
{
return 0;
}
}
int isempty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}
void peek()
{
if(isempty())
{
printf("Stack is Empt\ny");
}
else
{
printf("%d\n",stack[top]);
}
}