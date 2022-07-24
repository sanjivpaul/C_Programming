// 1.8 inputs:
// basic syntax
// scanf("Formate specifier", adress{variable_name});
// scanf("%d", &age);
/*
#include<stdio.h>

int main(){
    int age = 22;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is: %d", age);
    return 0;
}
*/

// example: add two numbers

/*
#include<stdio.h>

int main(){
    int a, b;

    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum of a and b is: %d", sum);
    return 0;
}

*/

// we can also write this way:


#include<stdio.h>

int main(){
    int a, b;

    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    // int sum = a + b;
    printf("Sum of a and b is: %d", a + b);
    return 0;
}

