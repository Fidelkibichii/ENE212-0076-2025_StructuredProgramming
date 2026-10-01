#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userName[50];

    printf("Please provide: ");
    scanf("%s", userName);

    printf("Hello, %s", userName);

    return 0;
}
