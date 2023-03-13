#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int sum=0;
    int sume,sumo;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sume=sum+i;
            continue;
        }
        else{
            sumo=sum+i;
            i++;
        }
        
    }
    int avg1,avg2;
    avg1=sume/n;
    avg2=sumo/n;
    printf("%d %d",avg1,avg2);
    return 0;
}