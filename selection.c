#include<stdio.h>
int* selection(int *ar,int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ar[j]<ar[i]){
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
            }
        }
    
    }
    return ar;
}
int main(){
    int n,i=0,count=0;
    scanf("%d",&n);
    int *y;
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    y=selection(ar,n);
    i=0;
   while(i<n){
        if(y[i]==y[i+1]){
            count++;
            i=i+2;
        }else{
            i++;
        }
    }
    printf("%d\n",count);
   
}