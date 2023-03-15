#ifndef MADHEAD_INCLUDED
#define MADHEAD_INCLUDED

#endif // MADHEAD_INCLUDED

// Hello World
void Hi()
{
    printf("Hello Programmer, or should I say a Pro in Grammar!!\n");
}

// Breaking Bad easter egg
void SayMyName(char name[])
{
    printf("Your Name is %s\n", name);
    printf("You are goddamn right!!\n");
}

// Addition
void addi(int a, int b)
{
    printf("Added Values are: %d\n", a+b);
}

// Multiplication
void mult(int a, int b)
{
    printf("Multiplied Values are: %d\n", a*b);
}

// Subtraction
void sub(int a, int b)
{
    printf("Subtracted Values are: %d\n", a-b);
}

// Division
void div(int a, int b)
{
    if (b != 0) {
        printf("Divided Values are: %d\n", a/b);
    } else {
        printf("Error: Denominator cannot be zero.\n");
    }
}

// Variable swapping
void swap(int *num1, int *num2)
{
    if (num1 != NULL && num2 != NULL) {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    } else {
        printf("Error: Null pointer(s) detected.\n");
    }
}

// Cube
int cube(int n)
{
    return (n * n * n);
}

// Square
int square(int x)
{
    return (x * x);
}

// Even checker
int isEven(int n)
{
    return !(n & 1);
}

// Odd checker
int isOdd(int n)
{
    return (n & 1);
}

// Factorial
int fact(int n)
{
    if (n < 0) {
        printf("Error: Input value cannot be negative.\n");
        return -1; // or any other appropriate value
    }
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

//Factorial using recursion
int factre(int n)
{
    if (n < 0) {
        printf("Error: Input value cannot be negative.\n");
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factre(n - 1);
    }
}
