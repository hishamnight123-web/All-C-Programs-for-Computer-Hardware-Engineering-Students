#include <stdio.h>

int main() 
{
    int n, a[100], odd = 0, even = 0, sodd = 0, seven = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    for(int i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0)  
        {
            even++;         
            seven += a[i];  
        }
        else  
        {
            odd++;          
            sodd += a[i];   
        }
    }

    printf("Even numbers count: %d\n", even);
    printf("Sum of even numbers: %d\n", seven);
    printf("Odd numbers count: %d\n", odd);
    printf("Sum of odd numbers: %d\n", sodd);

    return 0;
}
