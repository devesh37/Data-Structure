#include<stdio.h>
#include<conio.h>
#include<string.h>

int i,add,k,b=1,ch[20],n;
struct info
{

char data[20];
int key,chk;

}*a;

void modulo_hash();
void modulo_hash()
{
    printf("\nEnter the value of key:");
    scanf("%d",&k);
    i=k%10;
while(a[i].chk!=0&&i<n)
{printf("\n%d address occupied so trying to store in %d\n",i,i+b);
    i=i+b;

}
if(i>n)
{
    printf("No space");
exit(0);
}
a[i].chk=1;
a[i].key=k;
    printf("\nEnter the value of string:");
    scanf("%s",a[i].data);
}

void createlist(void);
void createlist(void)
{printf("Enter size :");
scanf("%d",&n);
a=(struct info*)calloc(n,sizeof(struct info));
}
void search(void);
void search(void)
{int j;char cmp[20];
printf("\n------------\n1.Search By key\n2.Search by string\n3.Search by Substring\n------------\nEnter option:\n");
    scanf("%d",&j);
switch(j){
 case 1:
    printf("Enter key:");
    scanf("%d",&k);
    system("cls");
printf("\nSearch by key(%d) Output:\n",k);


    for(i=0;i<n;i++)
    {
        if(a[i].key==k)

        printf("\n%s",a[i].data);
    }
break;
 case 2:
    printf("Enter string:");
    scanf("%s",cmp);
    system("cls");
printf("\nSearch by string Output:\n");


    for(i=0;i<n;i++)
    {
        if(!strcmp(a[i].data,cmp))
            printf("\n string found %s having key %d",a[i].data,a[i].key);
    }

break;
 case 3:
    printf("Enter substring:");
    scanf("%s",cmp);

    system("cls");
printf("\nSearch by sub-string Output:\n");


    for(i=0;i<n;i++)
    {
        if((substring(a[i].data,cmp))==1){
        printf("\n%s found in %s having key %d",cmp,a[i].data,a[i].key);}

    }

break;
default:
exit(0);
}
}
int substring(char str[10],char search[10]);
int substring(char str[10],char search[10])
{
int count1=0,count2=0,i,j,flag;
while (str[count1]!='\0')
count1++;
while (search[count2]!='\0')
count2++;
for(i=0;i<=count1-count2;i++)
{
for(j=i;j<i+count2;j++)
{
flag=1;
if (str[j]!=search[j-i])
{
flag=0;
break;
}
}
if (flag==1)
break;
}
return(flag);
}


void display(void);
void display(void)
{system("cls");
for(i=0;i<n;i++)
{
    printf("\nkey=%d string=%s",a[i].key,a[i].data);
}

}


int main()
{int j=0;
    system("color fc");
    createlist();

while(1)
{printf("\n------------\n1.Store by Modulo hash\n2.Search\n3.display\n------------\nEnter option:\n");
scanf("%d",&j);
system("cls");
switch(j)
{case 0:
    break;
 case 1:
modulo_hash();
    break;
case 2:
search();
    break;
case 3:
display();
    break;

default:
    exit(0);
}

}

}
