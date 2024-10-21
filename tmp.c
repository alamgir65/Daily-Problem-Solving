#include<stdio.h>
int main()
{
    // int day;
    // scanf("%d",&day);
    // switch(day){
    //     case 1: printf("Saturday"); break;
    //     case 2: printf("Sunday"); break;
    //     case 3: printf("Monday"); break;
    //     case 4: printf("Tuesday"); break;
    //     case 5: printf("Wednesday"); break;
    //     case 6: printf("Thursday"); break;
    //     case 7: printf("Friday"); break;
    //     default: printf("Invalid day"); break;
    // }
    // int n; 
    // scanf("%d", &n);
    // switch(n&1){
    //     case 0: printf("Even"); break;
    //     default: printf("Odd"); break;
    // }
    int a,b;
    scanf("%d",&a);
    getchar();
    char expression;
    scanf("%c",&expression);
    scanf("%d",&b);
    switch(expression){
        case '+': printf("Summation of a + b = \n%d",a+b); break;
        case '-': printf("Subtraction of a - b = \n%d",a-b); break;
        case '*': printf("Multiplication of a * b = \n%d",a*b); break;
        case '/': printf("Division of a / b = \n%d",a/b); break;
        case '%': printf("Remainder of a %% b = \n%d",a%b); break;
        default: printf("Invalid operator"); break;
    }
    return 0;
}