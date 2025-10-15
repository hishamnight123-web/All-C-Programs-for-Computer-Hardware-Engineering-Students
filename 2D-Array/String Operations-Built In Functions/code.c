#include <stdio.h>
#include <string.h>

void performStringOperations(char str1[], char str2[]) {
    char copy[100];
    char concat[200];

    // Find length of first string
    int length = strlen(str1);
   //Write code here
    printf("Length of first string: %d\n", length);

    // Copy first string
    strcpy(copy,str1);
    printf("Copied string: %s\n", copy);

    // Concatenate strings
    
    //Write code here
    strcpy(concat,str1);
    strcat(concat,str2);
    printf("Concatenated string: %s\n", concat);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    performStringOperations(str1, str2);

    return 0;
}
