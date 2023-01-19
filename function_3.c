#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main(){
int a,b,r;
printf("Enter two Numbers:");
scanf("%d%d",&a,&b);
sum(a,b);
return 0;
}
int sum(int a,int b){
int r;
r=a+b;
printf("Result:%d",r);
return 0;
}
