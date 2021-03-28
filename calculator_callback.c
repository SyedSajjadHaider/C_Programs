#include<stdio.h>
float sum(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
float my_callback(float (*fptr)(float,float),float,float);

float sum(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}

int main()
{
    float a, b;
    char option;
    while(1){
	        printf("\nEnter the value of a,b\n");
	        scanf("%f%f", &a, &b);
            printf("\nWhat operation you want to perform '+' '-'  '*' or '/'\n");
	        scanf(" %c",&option);            
        switch(option){
            case '+':	
                printf(" The sum is %f", my_callback(sum, a, b));
                break;
            case '-':	
                printf(" The sum is %f", my_callback(sub, a, b));
                break;
            case '*':	
                printf(" The sum is %f", my_callback(mul, a, b));
                break;
            case '/':	
                printf(" The sum is %f", my_callback(div, a, b));
                break;
            default:
                printf("choose correct option");
        }
    }
return 0;
}

float my_callback(float (*fptr)(float,float),float a,float b){
    return (*fptr)(a,b);
    }