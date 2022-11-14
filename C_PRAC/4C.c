//EVALUATE POSTFIX EXPRESSION
#define SIZE 50
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int s[SIZE], top=-1;
void push(int ele){
    s[++top]=ele;
}
int pop(){
    return(s[top--]);
}
int main(){
    char postf[50],ch,i=0,op1,op2;
    printf("\tEvaluate Postfix Expression\n");
    printf("Enter postfix expresion: ");scanf("%s",postf);
    while((ch=postf[i++])!='\0'){
        if(isdigit(ch)) push(ch-'0');
        else {
            op2 =pop();
            op1 =pop();
            switch (ch)
            {
            case '+': push(op1+op2); break;
            case '-': push(op1-op2);break;
            case '*': push(op1*op2);break;;
            case '/': push(op1/op2); break;
            }
        }
    }
    printf("\nGiven Postfix Expn: %s\n",postf);
    printf("\nResult after Evaluation: %d\n",s[top]);
}