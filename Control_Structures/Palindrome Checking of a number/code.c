#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    original=n;
    
    //implement your code here
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if (original == reversed)
    {
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
}
    return 0;
}
