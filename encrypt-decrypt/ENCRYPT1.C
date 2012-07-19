#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *f;
	char ip[20],op[20];
	int i,n,a,b;
	clrscr();

	f = fopen("check.txt","w");

	printf("\nEnter the word : ");
	scanf("%s",ip);

	n = strlen(ip);

	for(i=0;i<n-1;i++)
	{
		a = ip[i];
		b = ip[i+1];
		op[i] = (a + (a-b));
	}
	op[i] = ip[0] +1;
	op[i+1] = '\0';

	fprintf(f,"%s",op);

	getch();
}