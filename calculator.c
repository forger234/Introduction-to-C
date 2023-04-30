#include<stdio.h> 
int main() 
{ 
    char operator;
    float n1,n2,res=0;
    printf("Enter an operator: \n");
    scanf("%c",&operator);
    printf("Enter the values for two operands:n1 and n2: ");
    scanf("%f %f",&n1,&n2);
    switch(operator)
    { 
        case'+': 
                res=n1+n2;
                 break;
        case'-':
               res=n1-n2;
               break;
        case'*':
               res=n1*n2;
               break;
        case'/': 
               res=n1/n2;
               break;
        default :
        printf(" Error! You entered the invalid operator");   
    } 
    printf("The result is %f %c %f = %f",n1,operator,n2,res);
}
