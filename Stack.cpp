#include"Stack.h"
#include<iostream>

Stack::Stack(int cap)
{
    data = new int[cap];
    top = -1;
}

Stack::~Stack()
{
    delete[] data;
}

void Stack::push(int val){
    if(top==capacity-1)
   {     std::cout<<"stack is already full";
    return;}
    else
        data[top] = val;
        top++;


}

int Stack::pop(){
    if(top == -1)
        return -1;
    else
        top--;
        return data[top];
}

bool Stack::isFull(){
    if(top == capacity-1)
        return true;
    else 
        return false;
}

bool Stack::isEmpty(){
    if(top == -1)
        return true;
    else 
        return false;
}