#include<iostream>
#include "Stack.h"

using namespace std;

int main(){
Stack stack(3);
cout<<stack.isEmpty()<<endl;
stack.push(5);
stack.push(2);
cout<<stack.isFull();
cout<<stack.pop();
stack.push(99);
cout<<stack.isEmpty()<<"\n";
cout<<stack.isFull()<<"\n";
cout<<stack.pop();

    return 0;
}
