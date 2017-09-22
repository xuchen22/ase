#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hello()
{
    printf("hello guys!\n");
}

void help()
{
    printf("Show this help list!\n");
}

void quit()
{
    printf("Quit menu program!\n");
}

void display()
{
    printf("This is the menu!\n");
}

void add()
{
    int a,b;
    printf("please input two numbers:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    printf("Result: %d",a);
}

void sub()
{
    int a,b;
    printf("please input two numbers:\n");
    scanf("%d %d",&a,&b);
    a=a-b;
    printf("Result: %d",a);
}

void max()
{
    int a,b;
    printf("please input two numbers:\n");
    scanf("%d %d",&a,&b);
    if(b>a)
        a=b;
    printf("Max: %d",a);
}

void min()
{
    int a,b;
    printf("please input two numbers:\n");
    scanf("%d %d",&a,&b);
    if(b<a)
        a=b;
    printf("Min: %d",a);
}

int main()
{
    char cmd[128];
    while (1)
    {
        scanf("%s",cmd);
        if (strcmp(cmd,"display") == 0)
        {
            display();
        }
        else if (strcmp(cmd,"hello") == 0)
        {
            hello();
        }
        else if (strcmp(cmd,"help") == 0)
        {
            help();
        }
        else if (strcmp(cmd,"add") == 0)
        {
            add();
        }
        else if (strcmp(cmd,"sub") == 0)
        {
            sub();
        }
        else if (strcmp(cmd,"max") == 0)
        {
            max();
        }
        else if (strcmp(cmd,"min") == 0)
        {
            min();
        }
        else if (strcmp(cmd,"quit") == 0)
        {
            exit(0);
        }
        else
        {
            printf("Error: unsupported comman, you can use 'help' to get help\n");
        }
    }
}


























































































