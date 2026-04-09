#include<stdio.h>
int main()
{
int n1,n2,s1=0,s2=0;
while(1)
{
printf("enter a number1");
scanf("%d",&n1);
printf("enter a number 2");
scanf("%d",&n2);
s1=sumofdig(n1);
while(s1>10)
{
s1=sumofdig(s1);
}
s2=sumofdig(s2);
}
if(s1==s2)
{
continue;
}
else if(s1>s2)
{
printf("first one is winner");
break;
}
else
{
printf("second one is winner");
break;
}
return 0;
}

