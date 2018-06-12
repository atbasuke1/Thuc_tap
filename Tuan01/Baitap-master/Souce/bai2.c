#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	int i,h,t,M;
	printf("nhap So phan tu cua xau: ");
	scanf("%d",&M);
	char S[M];
	printf("Nhap Xau S:  ");
	fflush(stdin);
	gets(S);
	h = 0;
	t = 0;
	while(S[i] !=0){ 
		if(S[i] >= 'A' && S[i] <= 'Z') h++; /*Neu chu cai do la chu in hoa thi tang gia tri h len 1*/
		if(S[i] >= 'a' && S[i] <= 'z') t++; /* con la chu thuong thi tang t len 1 dv*/
		i++;
	}
	printf("Chu so in hoa: ");
	printf("%d\n",h);
	printf("Chu so thuong: ");
	printf("%d\n",t);
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}

