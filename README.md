# C_Programming
>This is a course of C language.
## Table of Content
1.Chapter 01

## Chapter 01
* Topics:
  * 1.1 **Variables:**
  * 1.2 **Keywords:**
  * 1.3 **Constants:**
  * 1.4 **Comments:**
  * 1.5 **C Programme structure:**
  * 1.6 **Compilation:**
  * 1.7 **Output:**
  * 1.8 **Input:**

* 1.1 **Variables:**
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


* 1.2 **Keywords:**
  >Reserved words that have special meaning to the compiler
  * 32 keywords in C 



* 1.3 **Constants:**
  >which cannot be modified once they are defined, values that don't change (fixed).
  * Types of constants:
    * 1.int constants (1, 2, 5, 8, 0, -6, -7)
    * 2.real constants (1.1, 1.5, -1.9, -2.5, 3.14, 5.0)
    * 3.character constants ( 'a', 'A', '$', '#', '&') 
   
   
   

* 1.4 **Comments:**
  >Comments are statements that are not executed by the compiler and interpreter.
  * Lines that are not part of programe:
    * 1.single line comment (// single line comments)
    * 2.multi line comments (/* multi line comments*/)
  
  

* 1.5 **C Programme structure:**
```c
#include <stdio.h> // pre-processor director

int main()
{
    printf("Hello world"); // code
    return 0;
}
```

* 1.6 **Compilation:**


* 1.7 **Output:**
```c
//normal
#include <stdio.h> // pre-processor director

int main()
{
    printf("Hello C"); // normal outputs
    printf("Hello world");
    return 0;
}
```

```c
// new line: \n
#include <stdio.h> // pre-processor director

int main()
{
    printf("Hello C \n"); // \n new line outputs
    printf("Hello world \n");
    return 0;
}
```
   > **Output Cases:**
   ```c
//Output CASES:
1.integers: %d (double values)
printf("age is %d", age);

2.real numbers: %f
printf("value of pi is %f", pi);

3.characters: %c
printf("star looks like this %c", star);
``` 
* 1.integers: `%d`
```c
 //1.integers: %d
 #include <stdio.h> 

 int main()
 {
     int age = 20;
     printf("age is: %d", age);
     return 0;
 }
```

* 2.real numbers: `%f`
```c
 //2.real numbers: %f
 #include <stdio.h> 

 int main()
 {
     float pi = 3.14;
     printf("The value of pi is: %f", pi);
     return 0;
}
```

* 3.characters: `%c`
```c
 //3.characters: %c
 #include <stdio.h> 

 int main()
 {
     char hashtag = '#';
     printf("Hashtag is looks like this: %c", hashtag);
     return 0;
 }
```


* 1.8 **Input:**
```c
//basic input syntax:
 scanf("Formate specifier", adress{variable_name});
 scanf("%d", &age);
```

```c
//example of c input:
#include<stdio.h>

int main(){
    int age = 22;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is: %d", age);
    return 0;
}
```
   > **example: add two numbers:**
   ```c
//Add two numbers:
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
``` 
> **we can also write this way:**

```c
//Add two numbers
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
```


   
