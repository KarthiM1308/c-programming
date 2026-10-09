
#include <stdio.h>

void convert(int n, int base)
{
    char result[32];
    int i = 0, rem;

    if (n == 0)
    {
        printf("0");
        return;
    }

    while (n > 0)
    {
        rem = n % base;

        if (rem < 10)
            result[i] = rem + '0';
        else
            result[i] = rem - 10 + 'A';

        i++;
        n = n / base;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }
}

int main()
{
    int n, base;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Enter target base (2-16): ");
    scanf("%d", &base);

    if (n < 0 || base < 2 || base > 16)
    {
        printf("Invalid input");
        return 1;
    }

    printf("Converted number: ");
    convert(n, base);

    return 0;
}
