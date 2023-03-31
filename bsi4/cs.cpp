#include<stdio.h>
int diemsoluong(float arr[],int n){
    if( n == 0){
    return 0;
    }
    if( arr[n-1] > 0){
        return 1 + diemsoluong(arr,n-1);
    }
    else{
        return diemsoluong(arr,n-1);
    }
}
int main(){
    float arr[]={0,1,2,3,4,5,6,7,8}int 
    int n = sizeof(arr)/sizeof(float);
    int count = diemsoluong(arr,n);
    printf("số lượng trong mảng là: %d\n",count);
    return 0;
}