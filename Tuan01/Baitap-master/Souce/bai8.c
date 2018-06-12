#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char s[100];
	int n,i,j;
	printf("nhap xau: ");
	gets(s);
	n= strlen(s);
	j=n-1;
	for (i=0;i<n/2; ++i) //kiem tra tu vi tri dau toi vi tri giua cua xau
	{	
		//doi cho lan luot tu chu dau voi chu cuoi day
		char c = s[i];
		s[i]=s[j];
		s[j]=c;
		j--;
	}
	printf("%s\n",s); //in ra xau can thiet
	return 0;
}
