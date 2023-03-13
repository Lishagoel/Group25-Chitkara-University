#include<stdio.h>
int main(){
    int n;
    printf("failed subjects: \n");
    scanf("%d",&n);
    int cls;
    printf("division: ");
    scanf("%d",&cls);
    switch(cls){
        case'1':
        switch(n){
            case'1':
            printf("grace marks=5 \n");
            break;
            case'2':
            printf("grace marks=10 \n");
            break;
            case'3':
            printf("grace marks=15 \n");
            break;
            default:
            printf("no grace marks \n");
        }
        break;
        case'2':
        switch(n){
            case'1':
            printf("grace marks=4 \n");
            break;
            case'2':
            printf("grace marks=8 \n");
            break;
            default:
            printf("no grace marks \n");
        }
        break;
        case'3':
        switch(n){
            case'1':
            printf("grace marks=5 \n");
            break;
            default:
            printf("no grace marks");
        }
    }
}