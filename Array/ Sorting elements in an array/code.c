#include <stdio.h>

// Function to read the array elements
void readArray(int arr[], int n) 
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}

// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int n) 
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main() {
    int n, arr[100];
    scanf("%d", &n);

    readArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
