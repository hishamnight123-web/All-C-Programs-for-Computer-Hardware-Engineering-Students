#include<stdio.h>
void printAscending(int n)
{
    if(n>0)
    {
        printAscending(n-1);
        printf("%d ",n);
    }
}
void printDescending(int n)
{
    if (n > 0) 
    {
        printf("%d ", n);  
        printDescending(n - 1); 
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Count from 1 to %d:\n", num);
    printAscending(num);

    printf("\nCount from %d to 1:\n", num);
    printDescending(num);

    return 0;
}
