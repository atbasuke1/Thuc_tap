#include <stdio.h>
#include <math.h>
int Ngay,Thang,Nam,KT;
void nhap(){
	printf("Nhap Ngay Thang Nam: ");
	scanf("%d %d %d",&Ngay,&Thang,&Nam);
	if (Nam % 4 == 0){ 
		printf("Nam nhuan");
	}	
	
	if(Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang ==10|| Thang==12){
		if (Ngay <=31)
		{
			printf("Ngay %d Thang  %d Nam %d la hop le\n",Ngay,Thang,Nam);
		}else printf("Ngay %d Thang  %d Nam %d khong hop le!!!!\n",Ngay,Thang,Nam);
	}
	if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)
	{
		if (Ngay <=30)
		{
			printf("Ngay %d Thang  %d Nam %d la hop le\n",Ngay,Thang,Nam);
		}else printf("Ngay %d Thang  %d Nam %d khong hop le!!!!\n",Ngay,Thang,Nam);
	}
	if (Thang == 2)
	{
		if ((Nam % 4 ==0) && Ngay <=28 )
		{
			printf("Ngay %d Thang  %d Nam %d la hop le\n",Ngay,Thang,Nam);
		}
		if ((Nam % 4 !=0) && Ngay <=29)
		{
			printf("Ngay %d Thang  %d Nam %d la hop le\n",Ngay,Thang,Nam);
		}
		else printf("Ngay %d Thang  %d Nam %d khong hop le!!!!\n",Ngay,Thang,Nam);
	}
	
	
	
}
int main(int argc, char const *argv[])
{
	nhap();
	
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}
