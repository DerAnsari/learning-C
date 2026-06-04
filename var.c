#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 10; //4 bytes
    float temp = 30.5; //4 bytes
    double pi = 3.1415959395395395; //8 bytes
    char grade = 'A'; //1 byte
    //String doesnt exist in c
    char name[] = "Plague";  // depends on how many char are involved
    //bool needs stdbool.h
    bool isOnline = true; //1 byter


    printf("Your age it %d \n", age);    
    printf("The temp is %f \n", temp);
    printf("The val of pi is %lf \n", pi);
    printf("Your grade is %c \n",grade);
    printf("Hello %s \n", name);
    printf("Bool is 0 or 1, true or false %d\n", isOnline);


    //set width in an interger 
    int num1 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%3d\n", num3);

    return 0;
}