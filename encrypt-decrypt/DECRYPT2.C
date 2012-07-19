#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *f;
	char ip[50],op[50];
	int i,n,a,b,j=0;

	f = fopen("check2.txt","r");

	clrscr();
	while(1)
	{
		fscanf(f,"%s",ip);
		if(strcmp(ip,"EOF")==0)
			break;

	n = strlen(ip);

	for(i=0;i<n;i++)
	{
		if(i!=0)
			b = ip[i-1];
		if(i==0)
			a = ip[n-1] - 1;
		else
			a = a + (a-b);
		op[i] = a;

	}
	op[0] = ip[n-1] -1;
	op[n] = '\0';

	printf("%s ",op);
	}

	getch();
}