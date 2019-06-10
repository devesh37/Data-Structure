#include<stdio.h>
#include<conio.h>
int *a,n,i,k;
char c;
void createarray(void);
void createarray(void)
{printf("No. of Value to be stored:");
scanf("%d",&n);
a=(int*)calloc(n,2);
for(i=0;i<n;i++)
{scanf("%d",(a+i)); }

}
void displayarray(void);
void displayarray(void)
{for(i=0;i<n;i++)
{
printf("a[%d]:%d\n",i,*(a+i));

}
}
int search(void);
int search(void)
{printf("Enter element to be search:");
    scanf("%d",&k);
for(i=0;i<=n;i++)
{if(i==n)
{
printf("Element not found");
return(-1);
}

  if(k==*(a+i))
  {printf("element found a[%d]:%d",i,*(a+i));

 return(i);
  }
}

}
int delete(int p);
int delete(int p)
{
    if(n==0)
{
 printf("No element in array.");
 return(n);
}
else
{
for(i=p;i<n;i++)
{
 a[i-1]=a[i];
}
}
return(n-1);

}



int insert(void);
int insert(void)
{int o;
    printf("Enter position:");
r1:
scanf("%d",&o);
if(o>n)
{
printf("Enter valid position:");
goto r1;
}
for(i=n;i>=(o-1);i--)

{
*(a+i+1)=*(a+i);
}
printf("Enter element to be entered:");
scanf("%d",(a+o-1));
 return(n+1);
}



int main()
{

createarray();
r2:
displayarray();

printf("\n------------------------------\n");
printf("1.Search\n2.delete\n3.insert\n");
printf("\n------------------------------\n");
scanf("%d",&i);
switch(i)
{case 1:
i=search();
if(i==-1){}
else{
   printf("Do you want delete[Y/N]:");
    scanf("%c",&c);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
  n=delete(i);
    }
else{break;}
}
case 2:
 printf("Enter position to be delete:");
 scanf("%d",&i);
 n=delete(i);
break;
case 3:
n=insert();
}
system("cls");
goto r2;
return 0;



}
