#include<stdio.h>
#include<string.h>
int main () {
    char str[9]; // isme char array aata hai yeh koi data type nhi hai
    printf("enter string");
    scanf("%s", str);
    int count = 0 ;
    for (int i = 0; i<strlen(str); i++) 
    {
        if (str[i] == 'a'
    
            || str[i] ==  'e'
            || str[i] == 'i'
            || str[i] == 'o'
            || str[i] == 'u' )
            {
            count++ ;
        }
        
             
                  {
        }
        printf("the number of vowels in the string is %d \n", count);
        printf("the number of total vowels%d\n", count );
    }
}
