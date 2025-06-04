#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Current value: %d\n", *p); // 10
    p++;
    printf("After increment: %d\n", *p); // 20
    p--;
    printf("After decrement: %d\n", *p);                               // 10
    printf("Add 2 to pointer: %d\n", *(p + 2));                        // 30
    printf("Subtract pointers (arr+3 - arr): %ld\n", (arr + 3) - arr); // 3

    return 0;
}
