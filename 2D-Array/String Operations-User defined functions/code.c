#include <stdio.h>

int strLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void strConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    

    while (dest[i] != '\0') {
        i++;
    }

   
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    dest[i] = '\0'; 
}

int main() {
    char str1[100], str2[100], copy[100], concat[200];
    int length;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    
    length = strLength(str1);
    printf("Length of first string: %d\n", length);

  
    strCopy(copy, str1);
    printf("Copied string: %s\n", copy);

    
    strCopy(concat, str1);  
    strConcat(concat, str2); 
    printf("Concatenated string: %s\n", concat);

    return 0;
}
