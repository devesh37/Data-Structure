#include<stdio.h>
#include<conio.h>
int search(int a[10],int n);
int search(int a[10],int n)
{
int i=0,k;
printf("Enter element to search:");
scanf("%d",&k);
for(i=0;i<10;i++)
{
 if(a[i]==k)
 {
  return(i);
 }
}
return(-1);
}
int deleteElement(int a[],int n,int p);
int deleteElement(int a[],int n,int p)
{
int i;
for(i=p;i<n;i++)
{
a[i-1]=a[i];
}

return(n-1);
}
int insert(int a[],int n);
int insert(int a[],int n)
{
int i,p;
printf("Enter position in which element to be inserted:");
r4:
scanf("%d",&p);
if(p>n)
{
printf("Enter position less the size:");
goto r4;
}
for(i=n-1;i>p;i++)
{
 a[i+1]=a[i];
}
printf("Enter new value:");
scanf("%d",&a[p-1]);
for(i=0;i<n;i++)
{
    printf("\na[%d]=%d",i,a[i]);
}
return(n+1);
}




int main()
{int a[10],i,p,n;
char d;
r1:

printf("Enter size:");

scanf("%d",&n);
if(n>10)
{printf("\nHuge size re-enter:");goto r1;}
printf("Enter array element:");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
r2:
printf("---------------------------------------\n1.search\n2.delete\n3.insert\n---------------------------------------\n");
scanf("%d",&i);
switch(i)
{case 1:
i=search(a,n);
if(i==-1)
{
printf("\nNot Found");
goto r2;}
else
{
printf("\nElement found position %d a[%d]=%d",i+1,i,a[i]);
printf("\ndo you want to delete the searched element [Y/N]:");
scanf("%c",&d);
scanf("%c",&d);
if(d=='y'||d=='Y')
{
n=deleteElement(a,n,i+1);

for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}
n++;
}
break;

case 2:
printf("Enter the position to be delete:");
scanf("%d",&i);
n=deleteElement(a,n,i);

for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}


break;

case 3:
n=insert(a,n);
break;
}
system("cls");
for(i=0;i<n;i++)
{
printf(" a[%d]=%d",i,a[i]);
}
printf("\n");
goto r2;

return(0);

}





































































