#include<stdio.h>
#include<stdlib.h>
void append(void);
void display(void);
int length(void);
int len;
void addatbegin(void);
void addafter(void);
void delete(void);
struct node
{
int data;
struct node*link;
struct node*prev;
};
struct node*root;
int main()
{
int ch;
while(1)
{
printf("Double Linked list operations:\n");
printf("1.append\n2.display\n3.length\n4.addatbegin\n5.addafter\n6.delete\n7.Quit\n");
printf("enter your choice=");
scanf("%d",&ch);
switch(ch)
{
case 1: append();
break;
case 2: display();
break;
case 3: len= length();
printf("length=%d\n\n",len);
break;
case 4: addatbegin();
break;
case 5: addafter();
break;
case 6: delete();
break;
case 7: exit(1);
break;
default:printf("invalid choice");
break;
}
}
}
void append()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data=");
scanf("%d",&temp->data);
temp->link=NULL;
temp->prev=NULL;
if(root==NULL)
{
root=temp;
}
else
{
struct node*p;
p=root;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
temp->prev=p;
}
}
void display()
{
struct node*temp;
temp=root;
while(temp!=NULL)
{
printf("%d<-->",temp->data);
temp=temp->link;
}
printf("\n\n");
}
int length()
{
struct node*temp;
temp=root;
int count=0;
while(temp!=NULL)
{
count++;
temp=temp->link;
}
return count;
}
void addatbegin()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data=");
scanf("%d",&temp->data);
temp->link=NULL;
temp->prev=NULL;
if(root==NULL)
{
root=temp;
}
else
{
root->prev=temp;
temp->link=root;
root=temp;
}
}
void addafter()
{
int loc,i=1,len;
printf("Enter location");
scanf("%d",&loc);
len=length();
if(loc>len)
{
printf("invalid input");
}
else
{
struct node*temp,*p;
p=root;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data=");
scanf("%d",&temp->data);
temp->link=NULL;
temp->prev=NULL;
while(i<loc)
{
p=p->link;
i++;
}

temp->link=p->link;
p->link->prev=temp;
p->link=temp;
temp->prev=p;
}
}
void delete()
{
int loc,i=1,len;
struct node*p,*q;
printf("Enter location");
scanf("%d",&loc);
len=length();
if(loc>len)
{
printf("invalid input");
}
else if(loc==1)
{
p=root;
root=p->link;
p->link->prev=NULL;
p->link=NULL;

free(p);
}
else
{
p=q=root;
while(i<loc)
{
q=p;
p=p->link;
i++;
}
q->link=p->link;
p->link->prev=q;
p->link=NULL;
p->prev=NULL;
free(p);

}
}