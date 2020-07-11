#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

char s[15],op[15],inp[15];
int i,l,top=-1,o=0;




void pop(void);
void pop(void)
{
top--;
}
void push(char a);
void push(char a)
{
top++;
s[top]=a;

}


int ex(char a);
int ex(char a)
{switch(a)
{case '-':
    return(0);
case '+':
return(1);
case '*':
    return(2);
case '/':
    return(3);
case '^':
    return (4);
case '$':
    return (4);
default :
    return(-1);
}
}






int ics(char);
int ics(char a)
{
switch(a){
case '+':
        return(1);
case '-':
    return(1);
case '*':
    return(3);
case '/':
    return(3);
case '^':
    return 6;
case '$':
    return 6;
}
}

int is(char a);
int is(char a)
{
 switch(a){
case '+':
        return(2);
case '-':
    return(2);
case '*':
    return(4);
case '/':
    return(4);
case '^':
    return 5;
case '$':
    return 5;
}


}

int main()
{r1:
printf("Enter the infix notation:");
scanf("%s",inp);
l=strlen(inp);
strcat(inp,"#");
printf("%s",inp);
for(i=0;i<=l;i++)
{
if(inp[i]=='#')
break;
if(isalnum(inp[i]))
{op[o]=inp[i];o++;continue;}
else{if(inp[i]==s[top])
{if((ics(inp[i]))<(is(s[top])))
{
op[o]=s[top];
o++;
pop();
push(inp[i]);
continue;
}
else{
push(inp[i]);
continue;
}


}
else
{if((ex(s[top]))>(ex(inp[i])))
{op[o]=s[top];o++;pop();push(inp[i]);continue;}
else
{
push(inp[i]);
continue;
}}}


}
printf("\nInput stack Output\n0.\n");
for(i=0;i<l;i++)
{
printf("%d.  %c  %c  %c\n",i+1,inp[i],s[i],op[i]);
}








printf("\n In stack: %s",s);
printf("\nIn output: %s",op);

strrev(s);
strcat(op,s);
printf("\nPostfix form: %s",op);

return 0;
}

