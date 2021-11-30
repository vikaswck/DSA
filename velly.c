#include<stdlib.h>
#include<stdio.h>
int main(){
    int steps,i,count=0;
    scanf("%d",&steps);
    char path[steps];
   scanf("%s",path);
   char *pc=&path[steps];
    for(i=1;i<=steps;i++){
        printf("%s\n",pc[i]);
        if(pc[0]==pc[i]){
            count++;
        }
    }printf("%s\n",pc);

    printf("%d\n",steps);
    printf("%d",count);
}
