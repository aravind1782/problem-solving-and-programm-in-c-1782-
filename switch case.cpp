#include<stdio.h>
int main()
{
	int k,h,m,s,km,mt,cm,ch,d,c,f,cbm,ml,l;
	printf("enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("enter the value h");
	m=h*60;
	s=m*60;
	printf(" %d",m);
	printf(" \n%d",s);
	break;
    case 2:
	printf("\nenter the value km ");
	scanf("%d",&km);
	mt=km*1000;
	cm=mt*100;
	printf(" \n %d ",mt);
	printf(" \n %d ",cm);
	break;
	case 3:
	printf("\nenter celcius value:");
	scanf("%d",&c);
	f=(c*9/5)+32;
	k=c+273;
	printf("\n%d",f);
	printf("\n%d",k);
	break;
	case 4:
	printf("\nEnter the litre");
	scanf("%d",&l);
	ml=l*1000;
	cbm=ml*1000;
	printf("\n%d",ml);
    printf("\n%d",cbm);
	break;
	}

	return 0;
	
	
}
