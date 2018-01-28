#include<stdio.h>
int addr(int* a,int* b);
int main(){
int a=10;
int b=8;
printf("sum *s= %d\n",addr(&a,&b));
return 0;
}

