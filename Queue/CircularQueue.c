#include<stdio.h>
#include<conio.h>

int a[10],n,i,f=-1,r=0;
char d;
void createqueue(void);
void createqueue(void)
{while(1){
printf("Enter size of queue:");
scanf("%d",&n);
if(n>0)
{

break;
}
printf("Enter valid size:");

}
f++;

}
void enque(void);
void enque(void)
{



printf("\nEnter element:");
scanf("%d",&a[r]);
r++;
}

int deque(void);
int deque(void)
{
if(r==f)
{
printf("Queue is empty!!");
}
else{

f++;
}
}
void display(void);
void display(void)
{
if(r==f||r==-1||f==-1)
{
printf("Queue is empty!!");
}
else{
    for(i=f;i<r;i++)
    {
    printf("%d|",a[i]);
    }
}
}

void main()
{

createqueue();
r1:
if(r>=n)
{

printf("Queue is full!!");

}
else{
display();
}printf("\n---------------------\n");
printf("1.Enqueue\n2.dequeue\n");
printf("---------------------\n");
scanf("%d",&i);
switch(i)
    {
case 1:
enque();
break;
case 2:
deque();
break;
default:
    break;
    }
   system("cls");
goto r1;

}
