#include "MadHead"
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    SayMyName(name);
    return 0;
}
