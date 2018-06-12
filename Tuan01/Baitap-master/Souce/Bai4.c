#include <math.h>
#include <stdio.h>
int n,i,j;
int main(int argc, char const *argv[])
{
	printf("Nhap chieu cao n = ");
	scanf("%d",&n);
	for(i = 0 ;i<=n;i++){
		for(j=1;j<=n-i;j++) // tao khoang trang 2 ben canh
			printf(" ");
		for (j=1;j<=2*i-1; ++j)
             printf("*");		// in ra tam giac sao
    	printf("\n");
	}
	return 0;
}
