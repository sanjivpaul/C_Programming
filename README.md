# C_Programming
>This is a course of C language.
## Table of Content
1.Chapter 01

## Chapter 01
* 1.1 **Variables**
  >Variable is the name of a memory location which store some data.
  * variable rules:
    * a. variables are case sensitive.(like javascript).
    * b. 1st character is alphabet or '_'
    * c. No comma/blank space
    * d. No other symbol other than '_'
     >Note: Write meaningfull names of the variables.

 ```c
//Variables

# include<stdio.h>

int main(){

    int a = 20;
    int A = 45;
    char star = '*';
    int age = 22;
    age = 24;// variables can be updated

    // student details
    char student_name = 'Sanjiv Paul';
    char class_roll_no = 'BSCHE18093';
    int university_roll_no = 191605772846;
    int _age = 22;
    int mobile_no = 7458268896;

    // mathamatical values
    float PI = 3.14;
    int final_price = 100;

    return 0;
}
```
