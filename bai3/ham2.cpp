#include<stdio.h>
#include<conio.h>
long tinhxn(int);
long tinhyn(int);
long tinhxn(int n);
{
if( n==0)
return 1;
return tinhxn(n-1) + tinhyn(n -1);
}
long tinhyn(int n){
    if( n==0)
    return 0;
    return 3*tinhxn(n-1) + 2*tinhyn(n-1);
}
int main(){
    int n;
    printf("nhap n: \n"); scanf("%d",&n);
    long kq1 = tinhxn(n);
    long kq2 = tinhyn(n);
    printf("x(n)= %d,y(n)= %d",kq1,kq2);
    getch();
    return 0;
}