#include<stdio.h>
int pair_of_socks(int ar[],int size){
    int i,j,count=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ar[i]==ar[j]){
                count++;
            }
            else 
            continue;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]);
    }
    int y=pair_of_socks(ar,n);
    printf("%d",y);

}