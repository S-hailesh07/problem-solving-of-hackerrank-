#include<stdio.h>
int main(){
    int a_count=0,b_count=0;
    int a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
    if(a1>b1){
        a_count++;
    }
    else if(b1>a1){
        b_count++;
    }
 if(a2>b2){
        a_count++;
    }
    else if(b2>a2){
        b_count++;
    } if(a3>b3){
        a_count++;
    }
    else if(b3>a3){
        b_count++;
    }
    printf("%d %d",a_count,b_count);
    }
