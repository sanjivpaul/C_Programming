// 1.Write a programe to calulate area of square.(side is given)
/*
#include<stdio.h>

int main(){
    float side;
    printf("enter side:");
    scanf("%f", &side);

    printf("area is : %f", side * side);
    return 0;
}
*/

// 2.Write a programe to calculate area of circle.(radius is given)
// area of circle = pi.r^2

#include<stdio.h>

int main(){
    float radius;
    printf("enter radius:");
    scanf("%f", &radius);

    printf("area is : %f", 3.14 * radius * radius);
    return 0;
}