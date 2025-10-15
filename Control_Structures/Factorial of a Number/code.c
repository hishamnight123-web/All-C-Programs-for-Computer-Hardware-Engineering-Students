#include <stdio.h>

int main() {
    long long unsigned int fact=1,n;
    printf("Enter a number: ");
    scanf(" %llu",&n);
    
    if(n!=0)
    {
        for(int i=1; i<=n; i++)
        {
            fact=fact*i;
        }
    }
        
    printf("Factorial: %llu\n", fact);
    return 0;
}
