#include <stdio.h>
#include<string.h>
char s[100];
int i,n;
void nhap(){
	printf("nhap xau: ");
	gets(s);
}
void chuanhoa(char s[]){
	n= strlen(s);
	fflush(stdin);
	//Viet hoa cho cai dau tien
	if (s[0] != 32)
        if (s[0] >96 && s[0]< 123)
 			s[0] -= 32;
            
	//xoa khoang trang lon
	while(s[i]!= '\0'){
		if(s[i] == ' '&& s[i+1] == ' ')
			strcpy(&s[i],&s[i+1]);
		i++;
	}
	//doi in hoa thanh chu thuong
	for(i =1;i<n;i++)
		if(s[i] >= 65 && s[i]<=90)
			s[i]+=32; 
	//Xoa cac ki tu
	for(i=0;i < n;i++)
    if((s[i]<65&&s[i]!=32)||s[i]>122||(s[i]>90&&s[i]<97)) 
        strcpy(&s[i],&s[i+1]);
   
}
int main(int argc, char const *argv[])
{
	nhap();
	chuanhoa(s);
	printf("%s",s);
	printf("\n");
	printf("********** Code by TRUNGDAO **************************************\n");
	return 0;
}
