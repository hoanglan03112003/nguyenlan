#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100 
void nhap (int a[],int &n){
    do{
        printf("nhap so phan tu: ");
        scanf("%d",&n);
        if (n <=0|| n > MAX){
            printf("so phan tu khong hop le.xin kiem tra lai!");
        }
    }while (n <= 0 || n > MAX);
    {
        for(int i=0;i<n;i++){
            printf("nhap a[%d]: ",i);
            scanf("%d",&a[i]);
        }
    }
    void xuat(int a[],int n)
    {
        for(int i=0;in <n;i++){
            printf("%4d",a[i]);
        }
    }
    int tongchan(int a[],int n){
        if( n==0)
        return 0;
        float s = tongchan(a,n-1);
        if(a[n-1]%2 ==0 )
        s = s +a[n-1];
        return s;
    }
    int main(){
        int n;
        int a[MAX];
        nhap(a,n);
        xuat(a,n);
        int tong = tongchan(a,n)
        printf("tong cac so chan =%d",tong);
        getch();
    }
}
