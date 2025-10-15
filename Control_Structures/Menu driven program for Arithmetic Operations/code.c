#include<stdio.h>
int main()
{
    int n,a,b,c;
    while(n!=5)
    {
    	printf("----- Arithmetic Operations Menu -----\n");
    	printf("1. Addition\n");
    	printf("2. Subtraction\n");
    	printf("3. Multiplication\n");
    	printf("4. Division\n");
    	printf("5. Exit\n");
    	printf("Enter your choice: ");
    	scanf("%d",&n);
    
    	switch (n)
    	{
       	 	case 1:
            		printf("Enter two numbers: ");
            		scanf("%d%d",&a,&b);
            		c=a+b;
            		printf("Addition: %d\n",c);
            		break;
        	case 2:
            		printf("Enter two numbers: ");
            		scanf("%d%d",&a,&b);
            		c=a-b;
            		printf("Subtraction: %d\n",c);
            		break;
        	case 3:
            		printf("Enter two numbers: ");
            		scanf("%d%d",&a,&b);
            		c=a*b;
            		printf("Multiplication: %d\n",c);
            		break;
        	case 4:
            		printf("Enter two numbers: ");
            		scanf("%d%d",&a,&b);
            	    if(b==0)
            	    {
            	        printf("Error: Division by zero is not allowed.");
            	    }
            	    else
            	    {
            	        printf("Division: %d",a/b);
            	    }
            		break;
        	case 5:
       	    		printf("Exiting the program.");
       	    		break;
       	    default:
       	            printf("Invalid choice.");
       	            break;
    	}
    }
	return 0;
}
