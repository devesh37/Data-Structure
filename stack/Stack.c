#include<stdio.h>
#include<conio.h>

int i,n,t=-1,*a,k,d;
void createstack(int n);
void createstack(int n)
{
a=(int*)calloc(n,2);

}
void peep(void);
void peep(void)
{
if(t<0)
{
printf("Under-flow condition.Enter element!!");
printf("Enter element to push:");
push();
}
printf("Top element=%d",*(a+t));
}
int push(void);
int push(void)
{
    if(t>=n-1)
{
    printf("stack is full pop any element!\n");
    printf("Do you want pop [y/n].");
    scanf("%c",&d);
    scanf("%c",&d);
    if(d=='y'||d=='Y')
    {pop();}

return(0);
}
else{
printf("Enter element to push:");
scanf("%d",&k);
t++;
*(a+t)=k;
return(0);
}}

int pop(void);
int pop(void)
{
if(t<0)
{
printf("Stack is in underflow condition.");
return(0);
}
t--;
return(0);
}


int main()
{printf("Enter the number block in stack:");
r1:
scanf("%d",&n);
if(n<=0)
{
    printf("Enter no. of block more than 0:");
    goto r1;
}
createstack(n);
printf("Stack of %d blocks created",n);
r2:
printf("\n----------------------------\n");
printf("1.push\n2.pop\n3.peep\n");
printf("----------------------------\n");
scanf("%d",&i);
switch(i)
{case 1:
push();
break;
 case 2:
     pop();
break ;
 case 3:
    peep();

}
system("cls");
if(t<0)
{
printf("Stack is in underflow condition.");
}
else
{
for(i=t;i>=0;i--)
{
printf("%d\n",*(a+i));
}
}
goto r2;
return(0);
}





















