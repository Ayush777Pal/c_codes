#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete(void);
int main()
{
int ch;
while(1)
{
printf("Single linke list operation");
printf("1.Append\n");
printf("2.Addatbegin\n");
printf("3.Addatafter\n");
printf("4.Length\n");
printf("5.Display\n");
printf("6.Delete\n");
printf("7.Quit\n");
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: append();
break;
case 2: addatbegin();
break;
case 3: addatafter();
break;
case 4: len = length();
printf("length:%d\n\n",len);
break;
case 5: display();
break;
case 6: delete();
break;
case 7: exit(1);
break;
default: printf("invalid input");
break;
}
}
}
void append()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&temp->data);
temp->link=NULL;
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
}
}
int length()
{
int count=0;
struct node *temp;
temp=root;
while(temp!=NULL)
{
count++;
temp=temp->link;
}
return count;
}
void display()
{
struct node*temp;
temp=root;
if(temp==NULL)
{
printf("no elements\n");
}
else
{
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("\n\n");
}
}
void addatbegin()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&temp->data);
temp->link=root;
root=temp;
}
void addatafter()
{
int loc,len,i=1;
struct node*p;
printf("Enter location to input");
scanf("%d",&loc);
len=length();
if(loc>len)
{
printf("invalid input\n");
}
else
{
p=root;
while(i<loc)
{
p=p->link;
i++;
}
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&temp->data);
temp->link=p->link;
p->link=temp;
}
}
void delete()
{
int loc,len,i=1;
struct node*p,*q,*t;
printf("Enter location to input");
scanf("%d",&loc);
len=length();
if(loc>len)
{
printf("invalid input\n");
}
else if(loc==1)
{
t=root;
root=t->link;
free(t);

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
p->link=NULL;
free(p);
}
}