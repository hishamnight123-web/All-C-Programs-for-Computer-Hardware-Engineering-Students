#include <stdio.h>
#include <math.h>

int main() {
    int num, original,m,sum=0,n=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

   //implement your code here
    int temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        n++;
    }
    while(num!=0)
    {
        m=num%10;
        sum=sum+pow(m,n);
        num=num/10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
