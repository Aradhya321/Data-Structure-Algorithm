//TO CONVERT GIVEN EXPRESSION INTO A POSTFIX EXPRESSION
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
#define SIZE 80

int TOP = -1;
char EXP[SIZE], STACK[SIZE],postfix[SIZE];                     

void push(char data)  
{
    TOP++;
    STACK[TOP] = data;
} 

char pop()
{
    char data;
    data = STACK[TOP];
    TOP--;
    return data;
}

int precedence(char ch)
{
    int x;
    if (ch == '(')
    x = 0;
    if (ch == '+' || ch == '-')
    x = 1;
    if (ch == '*' || ch == '/')
    x = 2;
    return x;
}

int main()
{
    char *ptr;
    int j = 0, popped;  
    cout << "Enter the infix expression to be converted into a postfix exprssion\n";  
    cin >> EXP;  
    ptr = EXP;
    while(*ptr != '\0')                     //till the end of the infix expression
    {
        if(*ptr != '(' && *ptr != ')' && *ptr != '+' && *ptr != '-' && *ptr != '/' && *ptr != '*')
        postfix[j++] = *ptr;
        else if(*ptr == '(')            //pushing into the stack
        push(*ptr);
        else if(*ptr == ')')
        {
            while((popped = pop()) != '(')               //pop until '(' is encountered
            postfix[j++] = popped;
        }
        else
        {
           while(precedence(STACK[TOP]) >= precedence(*ptr))
           {
            popped = pop();
            postfix[j++] = popped;
           }
           push(*ptr);  
        }
        ptr++;
    }
    while (TOP!= -1)                                       //popping until the stack gets empty
    {
        popped = pop();
        postfix[j++] = popped; 
    }
    cout << "\nThe postfix expression for the given expression : \n" ;
    cout << postfix ;
}