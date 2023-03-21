#include<stdio.h>
int main(){
    int q,d=0;
    float r,t;
    printf("enter q and r: ");
    scanf("%d %f",&q,&r);
    if(q>1000){
        d=10;
        t=(q*r)-(q*r*d/100);
        printf("total is: %f",t);
    }
    else{
        printf("total is: %d",q);
    }
    return 0;
}