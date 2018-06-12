#include<stdio.h>
#include <math.h>
int a,b,i,S=0;

int UCLN(int a, int b){
    
    if(a == 0 || b == 0) return 0;     //xet truong hop a hoac b = 0
    while(a!=b)                         // xet truong hop a khac b ;
        if(a > b) a -= b;                 
        if(b > a) b -= a;   
    return a;
}
int BCNN(int a,int  b){
    if(a == 0 || b == 0) return 0;     //xet truong hop a hoac b = 0
    else 
        S= S+ ((a*b)/UCLN(a,b));         
        return S;
    
}

int main(int argc, char const *argv[])
{   
    printf("nhap a,b = ");
    scanf("%d %d",&a,&b);
    if(a == 0 && b == 0) printf("khong ton tai UCLN va BCNN!!!!!!");
    else{
        printf("UCLN = %d \n ",UCLN(a,b));
        printf("BCNN = %d \n",BCNN(a,b));
    }
    
    printf("\n");
    printf("********** Code by TRUNGDAO **************************************\n");
    return 0;
}