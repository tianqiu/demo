#include <stdio.h>
#include <stdlib.h>
void print(char *argv[]);
void print(char *argv[])
{
	char *str;
	char strline[1024];
	FILE *fp;
	int i=0;
	int n;
	int m=0;
	n = atoi(argv[1]);
	if((fp = fopen(argv[2],"r")) == NULL)
	{
		printf("error\n");
		return;
	}
	while (!feof(fp)) 
	{ 
		fgets(strline,1024,fp);
		m++;
	}
	m--;
	rewind(fp);
	if(m <= n)
	{
		for(i=0;i<m;i++) 
		{
			fgets(strline,1024,fp);
			printf("%s",strline);
		}
	}
	else
	{
		for(i=0;i<m;i++)
		{
			fgets(strline,1024,fp);
			if(i >= m-n)
				printf("%s",strline);
		}
	}
}


int main(int argc,char *argv[])
{
	if(3 == argc)
		print(argv);
	else
		printf("please input ./tail num textname\n" );
	return 0;
}
