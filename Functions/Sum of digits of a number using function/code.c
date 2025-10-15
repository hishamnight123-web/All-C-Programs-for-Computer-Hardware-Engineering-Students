#include <stdio.h>

int sumOfDigits(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        int m = n % 10;
        sum = sum + m;
        n = n / 10;    
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf(" %d", sumOfDigits(n)); 
    return 0;
}
