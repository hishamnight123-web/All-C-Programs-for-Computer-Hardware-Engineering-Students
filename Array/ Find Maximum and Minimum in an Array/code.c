#include<stdio.h>
void main()
{
    int n,a[100],max,min;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf(" Maximum = %d\n",max);
    printf("Minimum = %d",min);
}
