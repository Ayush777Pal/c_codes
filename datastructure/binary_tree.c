#include<stdio.h>
#include<stdlib.h>
void insert(void);
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*root;
int main()
{
int ch;
void inorder(struct node*t);
printf("Binary Tree");
while(1)
{
printf("Binary tree operations\n");
printf("1.Insert\n2.Inorder\n3.Quit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:inorder(root);
break;
case 3:exit(1);
break;
default: printf("Invalid choice");
break;
}
}

}
void insert()
{
struct node*t;
struct node*parent;
t=(struct node*)malloc(sizeof(struct node));
printf("Enter node data");
scanf("%d",&t->data);
t->left=NULL;
t->right=NULL;
parent=root;
if(root==NULL)
{
root=t;
}
else
{
struct node*curr;
curr=root;
while(curr)
{
parent=curr;
if(t->data>curr->data)
{
curr=curr->right;
}
else
{
curr=curr->left;
}
}
if(t->data>parent->data)
{
parent->right=t;
}
else
{
parent->left=t;
}
}
}
void inorder(struct node*t)
{
if(t!=NULL)
{
inorder(t->left);
printf("%d\t",t->data);
inorder(t->right);
}
}