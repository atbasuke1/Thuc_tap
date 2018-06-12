#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main(int argc, char const *argv[])
{	
	int N,a[100],i=1;
	do{
	printf("Nhap N =  \n");
	scanf("%d",&N);
	}while(N<100 || N >999); // ktra dieu kien N co 3 chu so

	while(N != 0){
		a[i] = N%10;

		N = N/10;
		i++;
	}
	for(i =1;i<3;i++){
		if (a[i] < a[i+1])
	{
		swap(&a[i],&a[i+1]); //doi cho a[i] va a[i+1]

	}
	}

	for (i = 1;i<=3; ++i)
	{
		printf("%d",a[i]); //in ra so da duoc sap xep cac chu so
	}
	printf("\n");
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}