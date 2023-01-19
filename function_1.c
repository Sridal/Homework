#include<stdio.h>
#include<conio.h>
void sum();
int main(){
sum();
return 0;
}
void sum(){
int a,b,r;
printf("Enter two Numbers:");
scanf("%d%d",&a,&b);
r=a+b;
printf("Result:%d",r);
}
