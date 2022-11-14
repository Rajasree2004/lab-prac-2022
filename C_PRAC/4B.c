#include<stdio.h>
#include<stdlib.h>//alternate of alloc.h
#include<ncurses.h>
#define size 20
int m,l;
char exp[size];
char stack[size];
int top=-1;
void push(char ch){
    if(top+1>=size) printf("Stack is full");
    else {
        top+=1; stack[top]=ch;
    }
}
void pop(){
    if(top<0) printf("Stack is empty");
    else if(top>=0){
            if(stack[top]!='(') printf("%c",stack[top]);
            top-=1;
    }
}
void in_to_post(){
    m=0;
    while(m<l){
        switch(exp[m]){
            case '+': 
            case '-':
            while(stack[top]=='-'||stack[top]=='+'||stack[top]=='*'||stack[top]=='/'||stack[top]=='^'&&stack[top]!='(') pop();
            push(exp[m]);++m;break;
            case '/':
            case '*':
            while(stack[top]=='*'||stack[top]=='/'||stack[top]=='^'&&stack[top]!='(') pop();
            push(exp[m]);++m; break;
            case '^': push(exp[m]);++m;break;
            case '(': push(exp[m]);++m;break;
            case ')': push(exp[m]);++m;break;
            case '.': while(top>=0) pop();exit(0);
            default: if(isalpha(exp[m])){
                printf("%c",exp[m]);++m;break;
            }
            else{
                printf("Some error");exit(0);
            }
        }
    }
}
void main(){
    char ch;
    printf("Infix to Postfix\n");
    printf("Enter exp and enter fullstop to quit: \n");
    while((ch=getc(stdin))!='\n'){
        exp[m]=ch;m++;
    }
    l=m;
    in_to_post();getch();
}