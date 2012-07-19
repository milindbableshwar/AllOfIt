#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *f;
	char ip[50],op[50];
	int i,j=0,n,a,b;
	clrscr();

	f = fopen("check2.txt","w");
	while(1)
	{
		scanf("%s",ip);
		n = strlen(ip);

		if(strcmp(ip,"EOF")==0)
		{
			fprintf(f,"EOF");
			break;
		}

	for(i=0;i<n-1;i++)
	{
		a = ip[i];
		b = ip[i+1];
		op[i] = (a + (a-b));
	}
	op[i] = ip[0] +1;
	op[i+1] = '\0';

	fprintf(f,"%s ",op);

	}

	getch();
}