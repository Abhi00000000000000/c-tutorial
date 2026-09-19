#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[20];
    float CGPA;
};

int main (){

    struct student s1;
    s1.roll = 12;
    s1.CGPA = 9.9;
    *strcpy(s1.name, "abhsihek"); // Correct way to assign string to char array

    printf("the roll number is %d\n",s1.roll);
    printf("the name is %s\n",s1.name);
    printf("the CGPA is %f\n",s1.CGPA);

     struct student s2;
    s2.roll = 13;
    s2.CGPA = 9.0;
     strcpy(s2.name, "nikhil");
    printf("the roll number is %d\n",s2.roll);
    printf("the name is %s\n",s2.name);
    printf("the CGPA is %f\n",s2.CGPA);
 struct student s3;
    s3.roll = 14;
    s3.CGPA = 8.5;
strcpy(s3.name,"aman"); // Correct way to assign string to char array
    printf("the roll number is %d\n",s3.roll);
    printf("the name is %s\n",s3.name);
    printf("the CGPA is %f\n",s3.CGPA);
  return 0 ;
}

