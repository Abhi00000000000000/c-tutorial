#include<stdio.h>
int greaterno(int a ,int b ) //  declaration
{
  if (a>b){
  return (a);  // definition 
  }else {
  return (b);
  }
}

int main ()
  int a ,b ;
  printf("enter a ");
  scanf("%d",&a);

  printf("enter b ");     // call 
  scanf("%d",&b);
printf(" greater no is %d", greaterno(a,b) );
  return 0 ;
}
    
     