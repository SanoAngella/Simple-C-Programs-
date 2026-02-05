#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Number of digits: 1");
    else
        printf("Number of digits: %d", countDigits(num));

    return 0;
}
