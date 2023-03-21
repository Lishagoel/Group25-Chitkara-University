#include<stdio.h>
int main(){
    int year,ly,by,d,ry,td;
    year=1900;
    printf("enter by: ");
    scanf("%d",&by);
    by=by-year-1;
    ly=year/4;
    ry=year-ly;
    td=(ry*365)+(ly*366)+1;
    d=td%7;
    if(d==0){
        printf("monday");
    }
    else if(d==1){
        printf("tuesday");
    }
    else if(d==2){
        printf("wednesday");
    }
    else if(d==3){
        printf("thursday");
    }
    else if(d==4){
        printf("friday");
    }
    else if(d==5){
        printf("saturday");
    }
    else{
        printf("sunday");
    }
    return 0;
}