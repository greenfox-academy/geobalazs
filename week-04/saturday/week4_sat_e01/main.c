#include <stdio.h>
#include <stdlib.h>
int sum(void); //function declaration
int main()
{
    printf("%d" , sum());//print out your sum
    return 0;
}
int sum(void) // function definition
{
    int a=10000;
    int b=20000;
    //return with their sum
    return a + b;
}
