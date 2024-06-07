#include<stdio.h>
#include<math.h>
int A[10][10],B[10][10],i,j,m,n,p,q;
int add(void);
int sub(void);
int mul(void);
int tran(void);
int main()
{
int ch;
printf("Enter order of matrix A\n");
scanf("%d",&m);
scanf("%d",&n);
printf("order of matrix is A= %d × %d\n",m,n);
printf("Enter order of matrix B\n");
scanf("%d",&p);
scanf("%d",&q);
printf("order of matrix is B= %d × %d\n",p,q);
printf("write matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("Hence matrix A is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("write matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&B[i][j]);
}
}
printf("Hence matrix B is\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",B[i][j]);
}
printf("\n");
}
while(1)
{
printf("what you want to do\n");
printf("1.Addtion\n2.Substraction\n3.Multiplication\n4.Transverse\n5.Quit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: add();
break;
case 2: sub();
break;
case 3: mul();
break;
case 4: tran();
break;
case 5: exit(1);
break;
default:printf("invalid choice");
break;
}
}
}
//addition of matrix
int add()
{
if(p==m&&q==n)
{
int Sum[10][10];
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
Sum[i][j]=A[i][j]+B[i][j];
printf("%d\t",Sum[i][j]);
}
printf("\n");
}
}
else
{
printf("invalid input");
}

}
int sub()
{
if(p==m&&q==n)
{
int Sub[10][10];
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
Sub[i][j]=A[i][j]-B[i][j];
printf("%d\t",Sub[i][j]);
}
printf("\n");
}
}
else
{
printf("invalid input");
}
}
//multipilcation
int mul()
{
int mu[10][10],k;
printf("Multiplication of matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
mu[i][j]=0;
}
}
if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<q;k++)
{
mu[i][j]+=A[i][k]*B[i][k];
}
}
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",mu[i][j]);
}
printf("\n");
}
}
else
{
printf("invalid input");
}

}
//transverse
int tran()
{
int tra[10][10], tri[10][10];
printf("transverse of Matrix A\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
tra[j][i]=A[i][j];
printf("%d\t",tra[j][i]);
}
printf("\n");
}
printf("transverse of Matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
tri[j][i]=B[i][j];
printf("%d\t",tri[j][i]);
}
printf("\n");
}
}