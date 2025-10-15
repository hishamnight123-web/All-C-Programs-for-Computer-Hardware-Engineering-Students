#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);

    //implement your code here
    if(units>=500)
    {
        bill=units*5.50;
    }
    else if(units>=200&&units<=499)
    {
        bill=units*3.50;
    }
    else if(units>=100&&units<=199)
    {
        bill=units*2.50;
    }
    else
    {
        bill=units*1.50;
    }
    printf("Electricity bill: %.2f\n", bill);

    return 0;
}
