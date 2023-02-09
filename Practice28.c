// Write a function that print Namaste if user is Indian & Bonjour if user is Fernch

#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    printf("enter f for french & i for indian : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    
}

void namaste()
{
    printf("Namaste");
}

void bonjour()
{
    printf("Bonjour");
}