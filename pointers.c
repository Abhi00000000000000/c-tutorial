#include<stdio.h>

int main (){

    int a = 45; 
    int *ptr =&a; // pointer variable ptr is declared and initialized with the address of variable a
    printf("the value of a is %d\n",&a);
    return 0;
}