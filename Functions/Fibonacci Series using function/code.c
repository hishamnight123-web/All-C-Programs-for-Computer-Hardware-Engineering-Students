#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci(int n) {
    int f1=0,f2=1,f3;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }
       if (n == 1) {
        printf("Fibonacci Series: %d", f1);
        return;
    }
     printf("Fibonacci Series: %d %d", f1, f2);
    
    for(int i=2; i<n; i++)
    {
        f3=f1+f2;
        printf(" %d",f3);
        f1=f2;
        f2=f3;
    }

}

// Main function
int main()
{
    int terms;
    
    printf("Enter the number of terms: ");
    // write code here
    scanf("%d",&terms);
    // Function call
    printFibonacci(terms);
    
    return 0;
}
