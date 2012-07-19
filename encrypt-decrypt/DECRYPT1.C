#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *f;
	char ip[20],op[20];
	int i,n,a,b;

	f = fopen("check.txt","r");

	clrscr();

	fscanf(f,"%s",ip);

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

	printf("\nDecrypted word is : %s",op);

	getch();
}