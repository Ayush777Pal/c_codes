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
…
[9:12 AM, 6/7/2024] Ayush Pal: Circular queue using linked list
[9:12 AM, 6/7/2024] Ayush Pal: #include<stdio.h>
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
printf("Circular Queue using linked list\n\n\n");
while(1)
{
printf("Circular Queue operation");
printf("1.Inqueue\n2.Dequeue\n3.Display\n4.Quit\n");
printf("Enter your Choice=");
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
default: printf("Invalid choice");
break;
}
printf("\n");
}
}
void in()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter queue Data=");
scanf("%d",&temp->data);
if(front==NULL&&rear==NULL)
{
front=rear=temp;
front->link=front;
}
else
{
rear->link=temp;
temp->link=front;
rear=temp;
}
printf("\n\n");
}
void de()
{
if(front==NULL&&rear==NULL)
{
printf("No element in queue\n");
}
else
{
struct node*temp;
printf("Element deleted=%d",front->data);
temp=front;
front=front->link;
temp->link=NULL;
rear->link=front;
free(temp);
}
printf("\n\n");
}
void dis()
{
struct node*temp;
printf("\n");
if(front==NULL&&rear==NULL)
{
printf("No element in queue\n");
}
else
{
printf("Elements in Queue\n");
temp=front;
while(temp!=rear)
{
printf("%d\n",temp->data);
temp=temp->link;
}
printf("%d",rear->data);
}
printf("\n\n");
}