#include<stdio.h>
#include<stdlib.h>
void push(void);
void pop(void);
void peek(void);
void dis(void);
struct node
{
int data;
struct node*link;
};
struct node*top=NULL;
int main()
{
printf("Implementation of stack using single linked list\n");
int ch;
while(1)
{
printf("1.Push\n2.Pop\n3.Peek\n4.display\n5.Quit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: dis();
break;
case 5: exit(1);
break;
default:printf("Invalid choice");
break;
}
}
}
void push()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&temp->data);
temp->link=NULL;
if(top==NULL)
{
top=temp;
}
else
{
temp->link=top;
top=temp;
}

}
void pop(void)
{
struct node*temp;
if(top==NULL)
{
printf("list is empty");
}
else
{
temp=top;
top=temp->link;
printf("Element pooped=%d\n",temp->data);
free(temp);
}
}
void peek(void)
{
struct node*temp;
if(top==NULL)
{
printf("list is empty");
}
else
{
temp=top;
printf("Peek element is=%d\n",temp->data);
}
}
void dis()
{
if(top==NULL)
{
printf("No element");
}
else
{
printf("element in list are\n");
struct node*temp;
temp=top;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
}
}