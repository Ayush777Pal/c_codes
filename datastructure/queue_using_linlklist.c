#include<stdio.h>
#include<stdlib.h>
void in(void);
void de(void);
void dis(void);
struct node
{
int data;
struct node*link;
};
struct node*front=NULL;
struct node*rear=NULL;

int main()
{
int ch;
while(1)
{
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
default: printf("Invalid vaalue\n");
break;
}
}
}
void in()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter queue data=");
scanf("%d",&temp->data);
temp->link=NULL;
if(rear==NULL)
{
rear=temp;
front=temp;
}
else
{
rear->link=temp;
rear=temp;
}
printf("\n\n");
}
void de()
{
if(rear==NULL)
{
printf("No element\n");
}
else
{
struct node*temp;
temp=front;
printf("Data to be deleted=%d",front->data);
front=front->link;
free(temp);
}
printf("\n\n");
}
void dis()
{
if(front==NULL)
{
printf("no element\n");
}
else
{
struct node*temp;
temp=front;
while(temp->link!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
}
printf("\n\n");
}