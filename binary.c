#include<stdio.h>
#include<stdlib.h>
int binary(int [],int,int,int);
int main(){
    int n,*a,x,i,result;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
   result= binary(a,0,n-1,x);
   printf("%d",result);
}
int binary(int a[],int l,int r,int x){
    if(l<=r){
    int mid=l+(r-l)/2;
    if(a[mid]==x)
    return mid;
    else if(a[mid]>x){
        return binary(a,l,mid-1,x);
    }
    else{
        return binary(a,mid+1,r,x);
    }
    }
    return -1;
}