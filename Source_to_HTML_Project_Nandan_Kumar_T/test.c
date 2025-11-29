/* =========================
   Multi-line comment test
   ========================= */

#include <stdio.h>
#include <stdlib.h>
#include "stdlib.h"

// Single-line comment test

#define SIZE 10

typedef struct
{
    int id;
    char name[20];
} Person;

enum status
{
    OK = 1,
    FAIL = 0
};

static const double PI = 3.14159;
volatile unsigned long counter = 0;

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x = 1234;
    float y = 3.14;
    double e = 2.7e10;
    char c = 'A';
    char escaped = '\n';

    const char *str = "Hello, World!";
    const char *esc_str = "He said: \"Hello\"";

    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even: %d\n", i);
        }
        else
        {
            printf("Odd: %d\n", i);
        }
    }

    switch (x)
    {
    case 100:
        break;
    default:
        printf("Default\n");
        break;
    }

    // Operators test
    x++;
    y -= 1.0;
    x *= 2;
    x /= 3;
    int flag = (x == y) && (x != 0) || (x > 10);

    // Brackets test
    int arr[5] = {1, 2, 3, 4, 5};

    struct test_s
    {
        long val;
    } t1;

    return 0;
}
