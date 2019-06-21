#include<iostream>
using namespace std;
#define max 100

int top,stack[max];

void push(char x)
{
    if(top==max-1)
        cout<<"Stack is full";
    else
        stack[++top]=x;
}
void pop()
{
    cout<<stack[top--];
}
main()
{
    char str[]="Twinkle Kar";
    int len=sizeof(str);
    int i;
    for(i=0;i<len;i++)
        push(str[i]);
    for(i=0;i<len;i++)
        pop();
}
