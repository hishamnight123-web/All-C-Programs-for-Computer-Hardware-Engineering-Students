#include <stdio.h>

// Function to read array elements
void readArray(int arr[], int n) 
{
   for(int i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
}
// Function to perform linear search
int linearSearch(int arr[], int n, int key) 
{
    int result=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            result=i;
            break;
        }
    }
    return result;
}

int main() 
{
    int n, arr[100], key;

    // Read number of elements
    printf("number of elements ");
    scanf("%d", &n);

    // Read array elements using a function
    printf("array elements ");
    readArray(arr, n);

    // Read the element to be searched
    printf("element to search for ");
    scanf("%d", &key);

    // Search the element
    int result = linearSearch(arr, n, key);

    // Output the result
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
