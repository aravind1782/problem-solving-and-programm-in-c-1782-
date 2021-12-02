#include<stdio.h>
main()
{
   int a,b,c,d,e,f,ch;
   float g,h;
   printf("enter the value a");
   scanf ("%d",&a);
   printf("enter the value b");
   scanf("%d",&b);
   printf("enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
   c=a+b;
  printf("%d",c); 
   break;
   case 2:
   d=a-b;
   printf("%d",d);
   break;
   case 3:
   e=a*b;
   printf("%d",e);
   break;
   case 4:
   f=a/b;
   printf("%d",f);
   break;
  }
}
