#include<stdio.h>

int main() {
    int a[6]; // isme same data type kii values store hoti hai 
    for(int i = 0; i < 6; i++){
printf("Enter the value of a[%d]: ", i);
 scanf("%d" ,&a[i]);
    }
    
    for(int i = 0; i < 6; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
