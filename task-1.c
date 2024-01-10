#include <stdio.h>

int main() {
    char calculator;
    
	int a = 20;
	int b = 2;
	
	
    printf("Press + For ADD \n");
	printf("Press - For MINES  \n");
	printf("Press * For MULTI  \n");
	printf("Press / For DIVIED \n");
	
	printf("press above mentioned");
	scanf("%c",&calculator);
	

    switch (calculator) 
	{
        case '+':
            printf("Additions : A + B = %d%d \n",a,b,a+b);
            break;
            
        case '-':
            printf("subtraction : A - B = %d%d \n",a,b,a-b);
            break;
            
        case '*':
            printf("multiflipcation : A * B = %d%d \n",a,b,a*b);
            break;
            
        case '/':
            printf("Division : A / B = %d%d \n",a,b,a/b);
            break;
        
        default:
            printf("Invalid input!\n");
            break;
    }

    
}





