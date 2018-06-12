#include <stdio.h>
#include <math.h>
int n,i;
float S,c;
int main(int argc, char const *argv[])
{	
	S = 0;
	printf("nhap so m da di duoc: ");
	scanf("%d",&n);
	if(n<=1000) S= 10000;
	else{
		
		if(n>30000){
			S= 10000 +((float)(30000-1000)/200)*1500 + ((n-30000)/1000)*8000;
		}else S=(10000+((float)(n-1000)/200)*1500);
	}
	printf("Gia tien phai tra la:  ");
	printf("%8.0f D\n",S);
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}