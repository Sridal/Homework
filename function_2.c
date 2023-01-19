#include<stdio.h>
#include<conio.h>
int sum();
int main(){
int r;
r=sum();
printf("Result:%d",r);
return 0;
}
int sum(){
int a,b,r;
printf("Enter two Numbers:");
scanf("%d%d",&a,&b);
r=a+b;
return r;
}
